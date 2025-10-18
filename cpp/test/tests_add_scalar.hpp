#pragma once
#include "test_iface.hpp"
#include "test_encode.hpp"
#include <vector>
#include <cstdint>
#include <string>

static inline void load_addscalar_program(std::vector<uint16_t>& p) {
    std::vector<uint16_t> prog = {
        OP_MUL(R0, REG_blockIdx, REG_blockDim),
        OP_ADD(R0, R0, REG_threadIdx),

        OP_CONST(R1, 0x00),  // baseA
        OP_CONST(R3, 0x10),  // baseC
        OP_CONST(R5, 0x05),  // scalar 5

        OP_ADD(R4, R1, R0),  // addrA
        OP_LDR(R4, R4, 0),   // R4 = A[i]

        OP_ADD(R6, R4, R5),  // R6 = A[i] + 5

        OP_ADD(R7, R3, R0),  // addrC
        OP_STR(R7, R6, 0),   // C[i] = R6

        OP_RET()
    };
    p.assign(p.size(), 0);
    for (size_t i = 0; i < prog.size() && i < p.size(); ++i) p[i] = prog[i];
}

static inline void load_addscalar_data(std::vector<uint8_t>& d) {
    // A: 0..7, C: 0
    for (int i = 0; i < 8; ++i) d[i] = i;
    for (int i = 0; i < 8; ++i) d[16 + i] = 0;
}

static inline bool check_addscalar(const std::vector<uint8_t>& d, std::string& why) {
    for (int i = 0; i < 8; ++i) {
        uint8_t exp = uint8_t(d[i] + 5);
        uint8_t got = d[16 + i];
        if (got != exp) {
            why = "add_scalar mismatch at " + std::to_string(i);
            return false;
        }
    }
    return true;
}

static TestIface TEST_ADD_SCALAR {
    "add_scalar",
    load_addscalar_program,
    load_addscalar_data,
    check_addscalar
};
