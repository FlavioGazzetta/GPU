#pragma once
#include <cstdint>

// ============================================================================
// test_encode.hpp — Tiny-GPU test instruction encoders used by C++ tests
// ============================================================================
//
// Arithmetic/Logic (3-reg):
//   ADD rd, rs, rt  : 0011 dddd ssss tttt
//   SUB rd, rs, rt  : 0100 dddd ssss tttt
//   MUL rd, rs, rt  : 0101 dddd ssss tttt
//   DIV rd, rs, rt  : 0110 dddd ssss tttt
//
// Memory:
//   LDR rd, [rb + imm4] : 0111 dddd bbbb iiii
//   STR [rb + imm4], rs : 1000 iiii bbbb ssss
//
// Constant:
//   CONST rd, imm8      : 1001 dddd iiiiiiii
//
// Control:
//   RET                 : 1111 0000 0000 0000
//
// Special “registers” (read-only in the ISA):
//   %blockIdx=0xD, %blockDim=0xE, %threadIdx=0xF
// ============================================================================

static inline uint16_t OP_ADD(uint8_t rd, uint8_t rs, uint8_t rt) {
    return uint16_t((0b0011u << 12) | ((rd & 0xFu) << 8) | ((rs & 0xFu) << 4) | (rt & 0xFu));
}
static inline uint16_t OP_SUB(uint8_t rd, uint8_t rs, uint8_t rt) {
    return uint16_t((0b0100u << 12) | ((rd & 0xFu) << 8) | ((rs & 0xFu) << 4) | (rt & 0xFu));
}
static inline uint16_t OP_MUL(uint8_t rd, uint8_t rs, uint8_t rt) {
    return uint16_t((0b0101u << 12) | ((rd & 0xFu) << 8) | ((rs & 0xFu) << 4) | (rt & 0xFu));
}
static inline uint16_t OP_DIV(uint8_t rd, uint8_t rs, uint8_t rt) {
    return uint16_t((0b0110u << 12) | ((rd & 0xFu) << 8) | ((rs & 0xFu) << 4) | (rt & 0xFu));
}

static inline uint16_t OP_LDR(uint8_t rd, uint8_t rb, uint8_t imm4 = 0) {
    return uint16_t((0b0111u << 12) | ((rd & 0xFu) << 8) | ((rb & 0xFu) << 4) | (imm4 & 0xFu));
}
static inline uint16_t OP_STR(uint8_t rb, uint8_t rs, uint8_t imm4 = 0) {
    return uint16_t((0b1000u << 12) | ((imm4 & 0xFu) << 8) | ((rb & 0xFu) << 4) | (rs & 0xFu));
}

static inline uint16_t OP_CONST(uint8_t rd, uint8_t imm8) {
    return uint16_t((0b1001u << 12) | ((rd & 0xFu) << 8) | (imm8 & 0xFFu));
}

static inline uint16_t OP_RET() {
    return uint16_t(0b1111u << 12);
}

// --- Branch-related encoders you already support via decoder/pc ---
static inline uint16_t OP_CMP(uint8_t rs, uint8_t rt) {
    // 0010 dddd ssss tttt ; rd ignored for CMP, set rd=0
    return uint16_t((0b0010u << 12) | (0u << 8) | ((rs & 0xFu) << 4) | (rt & 0xFu));
}

// BRnzp: opcode 0001, bits [11:9]=NZP mask (P,Z,N mapped to [2:0]),
// imm8 is an absolute target PC (matches pc.sv behavior).
static inline uint16_t OP_BRNZP(uint8_t nzp_mask, uint8_t imm8) {
    return uint16_t((0b0001u << 12) | ((nzp_mask & 0x7u) << 9) | (imm8 & 0xFFu));
}

// ------------------------------ Registers -----------------------------------
enum : uint8_t {
    R0=0, R1, R2, R3, R4, R5, R6, R7,
    R8, R9, RA, RB, RC, RD, RE, RF
};

static constexpr uint8_t REG_blockIdx  = 0xD; // RD
static constexpr uint8_t REG_blockDim  = 0xE; // RE
static constexpr uint8_t REG_threadIdx = 0xF; // RF
