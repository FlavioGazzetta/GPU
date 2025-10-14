#pragma once
#include "test_iface.hpp"
#include <vector>
#include <cstdint>
#include <string>

// Memory layout (8-bit elements, row-major)
// A: [0..24], B: [25..49], C: [50..74]
static constexpr int A_BASE = 0;     // 25 bytes
static constexpr int B_BASE = 25;    // 25 bytes
static constexpr int C_BASE = 50;    // 25 bytes

// ---------------- Program: per-thread C[i,j] with unrolled k=0..4 ----------------
// Registers used (R0..R12 are writeable; R13..R15 are RO: blockIdx, blockDim, threadIdx)
// R0  = tid
// R1  = row
// R2  = col
// R3  = baseA (0)
// R4  = row*5
// R5  = tmp/addr/dataB
// R6  = acc
// R7  = addrC
// R8  = baseB (25)
// R9  = baseC (50)
// R10 = const 5
// R11 = A_row_base = baseA + row*5
// R12 = tmp/imm/A_val/product

static inline void load_matmul5x5_program(std::vector<uint16_t>& p) {
    p.assign(p.size(), 0);

    const uint16_t prog[] = {
        // tid = blockIdx*blockDim + threadIdx
        0x50DE, // MUL  R0, R13, R14
        0x300F, // ADD  R0, R0,  R15

        // consts and row/col
        0x9A05, // CONST R10, #5
        0x610A, // DIV  R1, R0,  R10      ; row = tid/5
        0x541A, // MUL  R4, R1,  R10      ; row*5
        0x4204, // SUB  R2, R0,  R4       ; col = tid - row*5

        0x9300, // CONST R3,  #0          ; A base
        0x9819, // CONST R8,  #25         ; B base
        0x9932, // CONST R9,  #50         ; C base

        0x3542, // ADD  R5, R4,  R2       ; idxC = row*5 + col
        0x3795, // ADD  R7, R9,  R5       ; addrC = baseC + idxC
        0x9600, // CONST R6,  #0          ; acc = 0

        0x3B34, // ADD  R11,R3,  R4       ; A_row_base = baseA + row*5

        // ---- k = 0 ----
        0x9C00, // CONST R12,#0
        0x35BC, // ADD  R5, R11, R12      ; addrA = A_row_base + 0
        0x7C50, // LDR  R12,R5            ; A_val -> R12

        0x9500, // CONST R5, #0
        0x3585, // ADD  R5, R8,  R5       ; B_base + 0
        0x3552, // ADD  R5, R5,  R2       ; + col
        0x7550, // LDR  R5, R5            ; B_val -> R5

        0x5CC5, // MUL  R12,R12,R5        ; prod
        0x366C, // ADD  R6, R6,  R12      ; acc += prod

        // ---- k = 1 ----
        0x9C01, // CONST R12,#1
        0x35BC, // ADD  R5, R11, R12
        0x7C50, // LDR  R12,R5

        0x9505, // CONST R5, #5
        0x3585, // ADD  R5, R8,  R5
        0x3552, // ADD  R5, R5,  R2
        0x7550, // LDR  R5, R5

        0x5CC5, // MUL  R12,R12,R5
        0x366C, // ADD  R6, R6,  R12

        // ---- k = 2 ----
        0x9C02, // CONST R12,#2
        0x35BC, // ADD  R5, R11, R12
        0x7C50, // LDR  R12,R5

        0x950A, // CONST R5, #10
        0x3585, // ADD  R5, R8,  R5
        0x3552, // ADD  R5, R5,  R2
        0x7550, // LDR  R5, R5

        0x5CC5, // MUL  R12,R12,R5
        0x366C, // ADD  R6, R6,  R12

        // ---- k = 3 ----
        0x9C03, // CONST R12,#3
        0x35BC, // ADD  R5, R11, R12
        0x7C50, // LDR  R12,R5

        0x950F, // CONST R5, #15
        0x3585, // ADD  R5, R8,  R5
        0x3552, // ADD  R5, R5,  R2
        0x7550, // LDR  R5, R5

        0x5CC5, // MUL  R12,R12,R5
        0x366C, // ADD  R6, R6,  R12

        // ---- k = 4 ----
        0x9C04, // CONST R12,#4
        0x35BC, // ADD  R5, R11, R12
        0x7C50, // LDR  R12,R5

        0x9514, // CONST R5, #20
        0x3585, // ADD  R5, R8,  R5
        0x3552, // ADD  R5, R5,  R2
        0x7550, // LDR  R5, R5

        0x5CC5, // MUL  R12,R12,R5
        0x366C, // ADD  R6, R6,  R12

        // store and return
        0x8076, // STR  R7, R6
        0xF000  // RET
    };

    for (size_t i = 0; i < sizeof(prog)/sizeof(prog[0]); ++i) p[i] = prog[i];
}

// ---------------- Data ----------------
static inline void load_matmul5x5_data(std::vector<uint8_t>& d) {
    d.assign(d.size(), 0);

    // A: simple 1..7 repeating
    for (int i = 0; i < 25; ++i) d[A_BASE + i] = (uint8_t)((i % 7) + 1);
    // B: (i*3)%11 + 1 pattern
    for (int i = 0; i < 25; ++i) d[B_BASE + i] = (uint8_t)(((i * 3) % 11) + 1);
    // C cleared
    for (int i = 0; i < 25; ++i) d[C_BASE + i] = 0;
}

// ---------------- Checker ----------------
static inline bool check_matmul5x5(const std::vector<uint8_t>& d, std::string& why) {
    auto A = [&](int r,int c){ return d[A_BASE + r*5 + c]; };
    auto B = [&](int r,int c){ return d[B_BASE + r*5 + c]; };
    auto C = [&](int r,int c){ return d[C_BASE + r*5 + c]; };

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            uint16_t acc = 0;
            for (int k = 0; k < 5; ++k) acc = (acc + (uint16_t)A(i,k) * (uint16_t)B(k,j)) & 0xFF; // modulo 256
            if (C(i,j) != (uint8_t)acc) {
                why = "matmul5x5 mismatch at (" + std::to_string(i) + "," + std::to_string(j)
                    + ") exp=" + std::to_string((uint8_t)acc)
                    + " got=" + std::to_string(C(i,j));
                return false;
            }
        }
    }
    return true;
}

static TestIface TEST_MATMUL5x5 {
    "matmul5x5",
    load_matmul5x5_program,
    load_matmul5x5_data,
    check_matmul5x5
};
