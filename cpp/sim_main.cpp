#include "Vgpu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include <cstdint>
#include <vector>
#include <cstdio>
#include <type_traits>
#include <unordered_map>
#include <string>
#include <cstring>

// ========================= tests =========================
#include "test/test_iface.hpp"
#include "test/matadd.hpp"       // defines TEST_MATADD
#include "test/matmul5x5.hpp"    // defines TEST_MATMUL5x5
#include "test/tests_memcpy.hpp"      // defines TEST_MEMCPY
#include "test/tests_add_scalar.hpp"  // defines TEST_ADD_SCALAR
#include "test/tests_madd.hpp"        // defines TEST_MADD
#include "test/tests_quickret.hpp"    // defines TEST_QUICKRET
#include "test/tests_branch_pred.hpp"

// Registry
static const std::unordered_map<std::string, TestIface*> kTests = {
    { TEST_MATADD.name,        &TEST_MATADD },
    { TEST_MATMUL5x5.name,     &TEST_MATMUL5x5 },
    { TEST_MEMCPY.name,        &TEST_MEMCPY },
    { TEST_ADD_SCALAR.name,    &TEST_ADD_SCALAR },
    { TEST_MADD.name,          &TEST_MADD },
    { TEST_QUICKRET.name,      &TEST_QUICKRET },
    { TEST_BRANCH_PRED.name,   &TEST_BRANCH_PRED }, 
};

static TestIface* pick_test_from_args(int argc, char** argv) {
    std::string want;
    for (int i = 1; i < argc; ++i) {
        if (std::strncmp(argv[i], "+test=", 6) == 0) { want = std::string(argv[i] + 6); break; }
    }
    if (!want.empty()) {
        // exact first
        auto it = kTests.find(want);
        if (it != kTests.end()) return it->second;
        // prefix QoL (e.g. +test=matmul5x -> matmul5x5)
        for (const auto& kv : kTests)
            if (kv.first.rfind(want, 0) == 0) return kv.second;
        std::fprintf(stderr, "[WARN] Unknown test '%s'. Available:", want.c_str());
        for (const auto& kv : kTests) std::fprintf(stderr, " %s", kv.first.c_str());
        std::fprintf(stderr, "\nFalling back to 'matadd'.\n");
    }
    return &TEST_MATADD;
}

// ========================= sim helpers =========================
static const int PROG_ADDR_BITS = 8;
static const int PROG_DATA_BITS = 16;
static const int PROG_CH        = 1;

static const int DATA_ADDR_BITS = 8;
static const int DATA_DATA_BITS = 8;
static const int DATA_CH        = 4;

static const int MAX_CYCLES     = 2000000;

template <typename T>
struct is_ptr_or_arr : std::bool_constant<std::is_pointer_v<T> || std::is_array_v<T>> {};

template <typename T>
static inline uint32_t rd_mask(const T& m, int i) {
    if constexpr (is_ptr_or_arr<T>::value) return static_cast<uint32_t>(m[i]);
    else return (static_cast<uint64_t>(m) >> i) & 0x1u;
}

template <typename T>
static inline void wr_mask(T& m, int i, uint8_t v) {
    if constexpr (is_ptr_or_arr<T>::value) { m[i] = v; }
    else {
        uint64_t vv = static_cast<uint64_t>(m);
        const uint64_t bit = 1ull << i;
        vv = (vv & ~bit) | ((v ? 1ull : 0ull) << i);
        m = static_cast<T>(vv);
    }
}

template <typename T>
static inline uint32_t rd_lane(const T& bus, int i, int bits_per_lane) {
    if constexpr (is_ptr_or_arr<T>::value) return static_cast<uint32_t>(bus[i]);
    else {
        const int lo = i * bits_per_lane;
        const uint64_t mask = (bits_per_lane >= 64) ? ~0ull : ((1ull << bits_per_lane) - 1ull);
        return (static_cast<uint64_t>(bus) >> lo) & mask;
    }
}

template <typename T>
static inline void wr_lane(T& bus, int i, int bits_per_lane, uint32_t val) {
    if constexpr (is_ptr_or_arr<T>::value) { bus[i] = val; }
    else {
        const int lo = i * bits_per_lane;
        const uint64_t mask = (bits_per_lane >= 64) ? ~0ull : ((1ull << bits_per_lane) - 1ull);
        uint64_t vv = static_cast<uint64_t>(bus);
        vv &= ~(mask << lo);
        vv |= (static_cast<uint64_t>(val) & mask) << lo;
        bus = static_cast<T>(vv);
    }
}

struct MemProg { std::vector<uint16_t> mem; MemProg() : mem(1u << PROG_ADDR_BITS, 0) {} };
struct MemData { std::vector<uint8_t>  mem; MemData() : mem(1u << DATA_ADDR_BITS, 0) {} };

static vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

static void tick(Vgpu* tb, VerilatedVcdC* trace) {
    tb->clk = 1; tb->eval(); if (trace) trace->dump(main_time); main_time += 5;
    tb->clk = 0; tb->eval(); if (trace) trace->dump(main_time); main_time += 5;
}

static inline void drive_program_mem(Vgpu* tb, MemProg& pmem) {
    for (int i = 0; i < PROG_CH; ++i) {
        const uint8_t valid = rd_mask(tb->program_mem_read_valid, i);
        const uint8_t addr  = static_cast<uint8_t>(rd_lane(tb->program_mem_read_address, i, PROG_ADDR_BITS));
        if (valid) {
            wr_mask(tb->program_mem_read_ready, i, 1);
            wr_lane(tb->program_mem_read_data,  i, PROG_DATA_BITS, pmem.mem[addr]);
        } else {
            wr_mask(tb->program_mem_read_ready, i, 0);
            wr_lane(tb->program_mem_read_data,  i, PROG_DATA_BITS, 0);
        }
    }
}

static inline void drive_data_mem(Vgpu* tb, MemData& dmem) {
    // reads
    for (int i = 0; i < DATA_CH; ++i) {
        const uint8_t valid = rd_mask(tb->data_mem_read_valid, i);
        const uint8_t addr  = static_cast<uint8_t>(rd_lane(tb->data_mem_read_address, i, DATA_ADDR_BITS));
        if (valid) {
            wr_mask(tb->data_mem_read_ready, i, 1);
            wr_lane(tb->data_mem_read_data,  i, DATA_DATA_BITS, dmem.mem[addr]);
        } else {
            wr_mask(tb->data_mem_read_ready, i, 0);
            wr_lane(tb->data_mem_read_data,  i, DATA_DATA_BITS, 0);
        }
    }
    // writes
    for (int i = 0; i < DATA_CH; ++i) {
        const uint8_t valid = rd_mask(tb->data_mem_write_valid, i);
        const uint8_t addr  = static_cast<uint8_t>(rd_lane(tb->data_mem_write_address, i, DATA_ADDR_BITS));
        const uint8_t data  = static_cast<uint8_t>(rd_lane(tb->data_mem_write_data,   i, DATA_DATA_BITS));
        if (valid) {
            dmem.mem[addr] = data;
#ifdef DEBUG_LOG
            std::printf("[HOST][WRITE] ch=%d addr=%u data=%u\n", i, addr, data);
#endif
            wr_mask(tb->data_mem_write_ready, i, 1);
        } else {
            wr_mask(tb->data_mem_write_ready, i, 0);
        }
    }
}

// ========================= main =========================
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto* tb = new Vgpu;
    auto* trace = new VerilatedVcdC;
    tb->trace(trace, 99);
    trace->open("dump.vcd");

    MemProg pmem;
    MemData dmem;

    // Select & load test
    TestIface* T = pick_test_from_args(argc, argv);
    std::printf("Running test: %s\n", T->name);
    T->load_program(pmem.mem);
    T->load_data(dmem.mem);

    // Reset
    tb->clk = 0;
    tb->reset = 1;
    tb->start = 0;
    tb->device_control_write_enable = 0;
    tb->device_control_data = 0;

    for (int c = 0; c < PROG_CH; ++c) {
        wr_mask(tb->program_mem_read_ready, c, 0);
        wr_lane(tb->program_mem_read_data,  c, PROG_DATA_BITS, 0);
    }
    for (int c = 0; c < DATA_CH; ++c) {
        wr_mask(tb->data_mem_read_ready,  c, 0);
        wr_lane(tb->data_mem_read_data,   c, DATA_DATA_BITS, 0);
        wr_mask(tb->data_mem_write_ready, c, 0);
    }

    for (int i = 0; i < 4; ++i) tick(tb, trace);
    tb->reset = 0;

    // Configure threads based on test
    const uint8_t threads = (std::string(T->name) == "matmul5x5") ? 25 : 8;
    tb->device_control_data = threads;
    tb->device_control_write_enable = 1; tick(tb, trace);
    tb->device_control_write_enable = 0;

    // Run
    tb->start = 1;
    int cycles = 0;
    while (!Verilated::gotFinish() && cycles < MAX_CYCLES) {
        drive_program_mem(tb, pmem);
        drive_data_mem(tb, dmem);
        tick(tb, trace);
        ++cycles;
        if (tb->done) break;
    }
    tb->start = 0; tick(tb, trace);

    std::printf("Completed in %d cycles\n", cycles);

    // Check
    std::string why;
    const bool ok = T->check(dmem.mem, why);
    std::printf("Result: %s\n", ok ? "PASS" : "FAIL");
    if (!ok) std::printf("Reason: %s\n", why.c_str());

    tb->final();
    trace->close();
    delete trace;
    delete tb;
    return ok ? 0 : 1;
}
