#pragma once
#include "test_iface.hpp"
#include "test_encode.hpp"
#include <vector>
#include <cstdint>
#include <string>

static inline void load_memcpy_program(std::vector<uint16_t>& p) {
    // same index math prelude as your matadd:
    // R0 := blockIdx * blockDim + threadIdx
    std::vector<uint16_t> prog = {
        OP_MUL(R0, REG_blockIdx, REG_blockDim), // R0 = blockIdx*blockDim
        OP_ADD(R0, R0, REG_threadIdx),          // R0 += threadIdx

        OP_CONST(R1, 0x00),  // baseA
        OP_CONST(R3, 0x10),  // baseC

        OP_ADD(R4, R1, R0),  // addrA
        OP_LDR(R4, R4, 0),   // R4 = *addrA

        OP_ADD(R7, R3, R0),  // addrC
        OP_STR(R7, R4, 0),   // *addrC = R4

        OP_RET()
    };
    p.assign(p.size(), 0);
    for (size_t i = 0; i < prog.size() && i < p.size(); ++i) p[i] = prog[i];
}

static inline void load_memcpy_data(std::vector<uint8_t>& d) {
    // A[0..7] = 10..17, C[0..7] = 0
    for (int i = 0; i < 8; ++i) d[i] = 10 + i;     // A
    for (int i = 0; i < 8; ++i) d[16 + i] = 0;     // C
}

static inline bool check_memcpy(const std::vector<uint8_t>& d, std::string& why) {
    for (int i = 0; i < 8; ++i) {
        uint8_t exp = d[i];
        uint8_t got = d[16 + i];
        if (got != exp) {
            why = "memcpy mismatch at " + std::to_string(i) +
                  " exp=" + std::to_string(exp) + " got=" + std::to_string(got);
            return false;
        }
    }
    return true;
}

static TestIface TEST_MEMCPY {
    "memcpy",
    load_memcpy_program,
    load_memcpy_data,
    check_memcpy
};
