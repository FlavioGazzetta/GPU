#pragma once
#include "test_iface.hpp"
#include "test_encode.hpp"
#include <vector>
#include <cstdint>
#include <string>

static inline void load_quickret_program(std::vector<uint16_t>& p) {
    // just do the index prelude to exercise fetch/decode and RET quickly
    std::vector<uint16_t> prog = {
        OP_MUL(R0, REG_blockIdx, REG_blockDim),
        OP_ADD(R0, R0, REG_threadIdx),
        OP_RET()
    };
    p.assign(p.size(), 0);
    for (size_t i = 0; i < prog.size() && i < p.size(); ++i) p[i] = prog[i];
}

static inline void load_quickret_data(std::vector<uint8_t>& d) {
    // untouched
}

static inline bool check_quickret(const std::vector<uint8_t>& d, std::string& why) {
    (void)why;
    return true; // nothing modified; just ensures 'done' is asserted without memory traffic
}

static TestIface TEST_QUICKRET {
    "quickret",
    load_quickret_program,
    load_quickret_data,
    check_quickret
};
