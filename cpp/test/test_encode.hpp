#pragma once
#include <cstdint>

// encodings inferred from your example:
//  - ADD rd, rs, rt    : 0011 dddd ssss tttt
//  - MUL rd, rs, rt    : 0101 dddd ssss tttt
//  - LDR rd, [rb + imm4]: 0111 dddd bbbb iiii
//  - STR [rb + imm4], rs: 1000 iiii bbbb ssss
//  - CONST rd, imm8     : 1001 dddd iiiiiiii
//  - RET                : 1111 0000 0000 0000
// special regs seen in your example:
//   %blockIdx=0xD, %blockDim=0xE, %threadIdx=0xF

static inline uint16_t OP_ADD(uint8_t rd, uint8_t rs, uint8_t rt) {
    return uint16_t((0b0011 << 12) | ((rd & 0xF) << 8) | ((rs & 0xF) << 4) | (rt & 0xF));
}
static inline uint16_t OP_MUL(uint8_t rd, uint8_t rs, uint8_t rt) {
    return uint16_t((0b0101 << 12) | ((rd & 0xF) << 8) | ((rs & 0xF) << 4) | (rt & 0xF));
}
static inline uint16_t OP_LDR(uint8_t rd, uint8_t rb, uint8_t imm4 = 0) {
    return uint16_t((0b0111 << 12) | ((rd & 0xF) << 8) | ((rb & 0xF) << 4) | (imm4 & 0xF));
}
static inline uint16_t OP_STR(uint8_t rb, uint8_t rs, uint8_t imm4 = 0) {
    return uint16_t((0b1000 << 12) | ((imm4 & 0xF) << 8) | ((rb & 0xF) << 4) | (rs & 0xF));
}
static inline uint16_t OP_CONST(uint8_t rd, uint8_t imm8) {
    return uint16_t((0b1001 << 12) | ((rd & 0xF) << 8) | (imm8 & 0xFF));
}
static inline uint16_t OP_RET() {
    return uint16_t(0b1111 << 12);
}

// special “registers”
enum : uint8_t {
    R0=0, R1, R2, R3, R4, R5, R6, R7,
    R8, R9, RA, RB, RC, RD, RE, RF
};
static constexpr uint8_t REG_blockIdx  = 0xD;
static constexpr uint8_t REG_blockDim  = 0xE;
static constexpr uint8_t REG_threadIdx = 0xF;
