#pragma once
#include "test_iface.hpp"
#include "test_encode.hpp"
#include <vector>
#include <cstdint>
#include <string>

static inline void load_madd_program(std::vector<uint16_t>& p) {
    std::vector<uint16_t> prog = {
        OP_MUL(R0, REG_blockIdx, REG_blockDim),
        OP_ADD(R0, R0, REG_threadIdx),

        OP_CONST(R1, 0x00),  // baseA
        OP_CONST(R2, 0x08),  // baseB
        OP_CONST(R3, 0x10),  // baseC
        OP_CONST(R5, 0x02),  // k1 = 2
        OP_CONST(R6, 0x03),  // k2 = 3

        // R4 := A[i]
        OP_ADD(R4, R1, R0),
        OP_LDR(R4, R4, 0),

        // R7 := B[i]
        OP_ADD(R7, R2, R0),
        OP_LDR(R7, R7, 0),

        // R4 := R4 + R4  (2*A)
        OP_ADD(R4, R4, R4),
        // R7 := R7 + R7 + R7 (3*B) using two adds
        OP_ADD(R7, R7, R7),  // 2*B
        OP_ADD(R7, R7, R2 /* misuse */) // <-- NOTE: we don't have ADDI; instead,
                                         // we’ll do 3*B as (2*B + B)
                                         // so use R2 to hold B again:
    };
    // We need R2 to be B value, not baseB. So adjust: load B into R2 earlier.
    // Re-emit a corrected stream (easier than fancy editing here).
    prog.clear();
    prog = {
        OP_MUL(R0, REG_blockIdx, REG_blockDim),
        OP_ADD(R0, R0, REG_threadIdx),

        OP_CONST(R1, 0x00),  // baseA
        OP_CONST(R2, 0x08),  // baseB
        OP_CONST(R3, 0x10),  // baseC

        // R4 := A[i]
        OP_ADD(R4, R1, R0),
        OP_LDR(R4, R4, 0),

        // R5 := B[i]
        OP_ADD(R5, R2, R0),
        OP_LDR(R5, R5, 0),

        // R6 := 2*A = R4 + R4
        OP_ADD(R6, R4, R4),

        // R7 := 3*B = (B + B) + B
        OP_ADD(R7, R5, R5),   // 2*B
        OP_ADD(R7, R7, R5),   // 3*B

        // R6 := 2*A + 3*B
        OP_ADD(R6, R6, R7),

        // store to C[i]
        OP_ADD(R7, R3, R0),
        OP_STR(R7, R6),

        OP_RET()
    };

    p.assign(p.size(), 0);
    for (size_t i = 0; i < prog.size() && i < p.size(); ++i) p[i] = prog[i];
}

static inline void load_madd_data(std::vector<uint8_t>& d) {
    // A: 1..8, B: 1..8, C: 0
    for (int i = 0; i < 8; ++i) d[i] = i + 1;
    for (int i = 0; i < 8; ++i) d[8 + i] = i + 1;
    for (int i = 0; i < 8; ++i) d[16 + i] = 0;
}

static inline bool check_madd(const std::vector<uint8_t>& d, std::string& why) {
    for (int i = 0; i < 8; ++i) {
        uint16_t a = d[i];
        uint16_t b = d[8 + i];
        uint16_t exp = (2*a + 3*b) & 0xFF;
        uint8_t  got = d[16 + i];
        if (got != exp) {
            why = "madd mismatch at " + std::to_string(i);
            return false;
        }
    }
    return true;
}

static TestIface TEST_MADD {
    "madd_2a_3b",
    load_madd_program,
    load_madd_data,
    check_madd
};
