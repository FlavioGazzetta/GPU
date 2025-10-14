#pragma once
#include "test_iface.hpp"
#include <vector>
#include <cstdint>
#include <string>

// ---- DEFINITIONS (header-only) ----
static inline void load_matadd_program(std::vector<uint16_t>& p) {
    const uint16_t prog[] = {
        0b0101000011011110, // MUL R0, %blockIdx, %blockDim
        0b0011000000001111, // ADD R0, R0, %threadIdx
        0b1001000100000000, // CONST R1, #0        ; baseA
        0b1001001000001000, // CONST R2, #8        ; baseB
        0b1001001100010000, // CONST R3, #16       ; baseC
        0b0011010000010000, // ADD R4, R1, R0
        0b0111010001000000, // LDR R4, R4
        0b0011010100100000, // ADD R5, R2, R0
        0b0111010101010000, // LDR R5, R5
        0b0011011001000101, // ADD R6, R4, R5
        0b0011011100110000, // ADD R7, R3, R0
        0b1000000001110110, // STR R7, R6
        0b1111000000000000, // RET
    };
    p.assign(p.size(), 0);
    for (size_t i = 0; i < sizeof(prog)/sizeof(prog[0]); ++i) p[i] = prog[i];
}

static inline void load_matadd_data(std::vector<uint8_t>& d) {
    // A: 0..7, B: 0..7, C cleared
    for (int i = 0; i < 8; ++i) d[i] = i;
    for (int i = 0; i < 8; ++i) d[8 + i] = i;
    for (int i = 0; i < 8; ++i) d[16 + i] = 0;
}

static inline bool check_matadd(const std::vector<uint8_t>& d, std::string& why) {
    for (int i = 0; i < 8; ++i) {
        uint8_t exp = d[i] + d[8 + i];
        uint8_t got = d[16 + i];
        if (got != exp) {
            why = "matadd mismatch at " + std::to_string(i);
            return false;
        }
    }
    return true;
}

static TestIface TEST_MATADD {
    "matadd",
    load_matadd_program,
    load_matadd_data,
    check_matadd
};
