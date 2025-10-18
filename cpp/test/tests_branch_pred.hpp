#pragma once
#include "test_iface.hpp"
#include "test_encode.hpp"
#include <vector>
#include <cstdint>
#include <string>

// Uniform branch per block: block 0 -> 0x55, block 1 -> 0xAA.
// Keeps branch decision uniform across threads (no divergence).

static inline void load_branchpred_program(std::vector<uint16_t>& p) {
    std::vector<uint16_t> prog;
    prog.reserve(64);

    // tid = blockIdx*blockDim + threadIdx  -> R0
    prog.push_back(OP_MUL(R0, REG_blockIdx, REG_blockDim));
    prog.push_back(OP_ADD(R0, R0, REG_threadIdx));

    // baseC -> R9
    prog.push_back(OP_CONST(R9, 0x10));

    // r = blockIdx % 2 (uniform across the block)
    prog.push_back(OP_CONST(R1, 0x00));              // R1 = 0
    prog.push_back(OP_ADD(R2, REG_blockIdx, R1));    // R2 = blockIdx
    prog.push_back(OP_CONST(RA, 0x02));              // RA = 2
    prog.push_back(OP_DIV(R3, R2, RA));              // q = blockIdx/2
    prog.push_back(OP_ADD(R3, R3, R3));              // t2q = q + q
    prog.push_back(OP_SUB(R4, R2, R3));              // r = blockIdx - 2*q  (0 or 1)

    // Default EVEN path value: R6 = 0x55
    prog.push_back(OP_CONST(R6, 0x55));

    // CMP r, 0 (sets NZP). Use RC as zero.
    prog.push_back(OP_CONST(RC, 0x00));              // zero
    prog.push_back(OP_CMP(R4, RC));

    // BRnzp P -> ODD label (mask for Positive = bit2)
    const size_t br_to_odd_idx = prog.size();
    prog.push_back(OP_BRNZP(0b100, /*imm8*/ 0x00));

    // EVEN path: store & return
    prog.push_back(OP_ADD(R7, R9, R0));             // addr = baseC + tid
    prog.push_back(OP_STR(R7, R6));
    prog.push_back(OP_RET());

    // ODD label:
    const size_t odd_label_idx = prog.size();
    prog.push_back(OP_CONST(R6, 0xAA));             // odd-block value
    prog.push_back(OP_ADD(R7, R9, R0));
    prog.push_back(OP_STR(R7, R6));
    prog.push_back(OP_RET());

    // Patch BR target
    prog[br_to_odd_idx] = OP_BRNZP(0b100, static_cast<uint8_t>(odd_label_idx));

    // Copy into program memory
    p.assign(p.size(), 0);
    for (size_t i = 0; i < prog.size() && i < p.size(); ++i) p[i] = prog[i];
}

static inline void load_branchpred_data(std::vector<uint8_t>& d) {
    for (int i = 0; i < 32; ++i) d[0x10 + i] = 0;
}

static inline bool check_branchpred(const std::vector<uint8_t>& d, std::string& why) {
    // With 8 threads total split into two 4-thread blocks:
    //   block 0 (tid 0..3) -> 0x55
    //   block 1 (tid 4..7) -> 0xAA
    for (int i = 0; i < 8; ++i) {
        uint8_t exp = (i < 4) ? 0x55 : 0xAA;
        uint8_t got = d[0x10 + i];
        if (got != exp) {
            why = "branch_pred mismatch at tid=" + std::to_string(i) +
                  " exp=" + std::to_string(exp) + " got=" + std::to_string(got);
            return false;
        }
    }
    return true;
}

static TestIface TEST_BRANCH_PRED {
    "branch_pred_even_odd",
    load_branchpred_program,
    load_branchpred_data,
    check_branchpred
};
