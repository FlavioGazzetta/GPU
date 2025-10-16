# ============================================================
# Tiny-GPU Makefile — DUT build + UVM-on-Verilator support
# ============================================================

TOP_MODULE  = gpu
EXE_NAME    = V$(TOP_MODULE)
OBJ_DIR     = obj_dir

SRC_SV = \
  dut/src/alu.sv \
  dut/src/controller.sv \
  dut/src/core.sv \
  dut/src/dcr.sv \
  dut/src/decoder.sv \
  dut/src/dispatch.sv \
  dut/src/fetcher.sv \
  dut/src/lsu.sv \
  dut/src/pc.sv \
  dut/src/registers.sv \
  dut/src/scheduler.sv \
  dut/src/gpu.sv

SRC_CPP = cpp/sim_main.cpp

# ----- Debug toggle -----
DEBUG ?= 1

ifeq ($(DEBUG),1)
  DEBUG_DEF   = -DDEBUG_LOG
  LOG_STATUS  = DEBUG_LOG enabled
else
  DEBUG_DEF   =
  LOG_STATUS  = DEBUG_LOG DISABLED
endif

# ----- Custom run arguments -----
ARGS ?=

# ----- Tool flags -----
CXXFLAGS = -std=c++17 -O3 $(DEBUG_DEF)
LDFLAGS  = -O3

VERILATOR_FLAGS = \
  --sv --cc --exe --build \
  -Wall -Wno-fatal -Wno-UNOPTFLAT \
  --trace --trace-structs \
  $(DEBUG_DEF) \
  -CFLAGS "$(CXXFLAGS)" \
  -LDFLAGS "$(LDFLAGS)" \
  -top-module $(TOP_MODULE)

# ============================================================
#  Basic DUT-only simulation
# ============================================================

.PHONY: all run run-debug run-nodebug clean

all: run

run:
	@echo "🚀 Building and running $(TOP_MODULE) with $(LOG_STATUS)..."
	verilator $(VERILATOR_FLAGS) $(SRC_SV) $(SRC_CPP)
	@echo ""
	@echo "------------------------------------------"
	@echo "Running simulation:"
	@echo "------------------------------------------"
	./$(OBJ_DIR)/$(EXE_NAME) $(ARGS)

run-debug:
	$(MAKE) run DEBUG=1

run-nodebug:
	$(MAKE) run DEBUG=0

clean:
	@echo "🧹 Cleaning build directory..."
	rm -rf $(OBJ_DIR) obj_uvm *.vcd *.fst *.log


# ============================================================
#  UVM-on-Verilator build (CHIPS Alliance fork)
# ============================================================

# Where you cloned CHIPS Alliance UVM-for-Verilator library:
UVM_ROOT ?= $(PWD)/third_party/uvm
UVM_INC  = -I$(UVM_ROOT)/src
UVM_TOP  = $(UVM_ROOT)/src/uvm_pkg.sv

# Testbench sources
TB_SV = \
  tb/if/program_mem_if.sv \
  tb/if/data_mem_if.sv \
  tb/if/ctrl_if.sv \
  tb/uvm/pkg/gpu_pkg.sv \
  tb/top/tb_top.sv

# UVM sim uses tb_top as the elaboration root
UVM_TOP_MODULE = tb_top
UVM_EXE        = V$(UVM_TOP_MODULE)
UVM_OBJ_DIR    = obj_uvm

# Verilator flags for UVM (dynamic scheduler, timing)
VERILATOR_UVM_FLAGS = \
  --sv --cc --exe --build \
  -Wall -Wno-fatal -Wno-UNOPTFLAT -Wno-BLKANDNBLK -Wno-TIMESCALEMOD \
  --timing \
  --trace --trace-structs \
  $(DEBUG_DEF) \
  -CFLAGS "-std=c++17 -O3 $(DEBUG_DEF)" \
  -LDFLAGS "-O3" \
  -DVERILATOR=1 \
  -DUVM_REGEX_NO_DPI \
  -top-module $(UVM_TOP_MODULE) \
  --Mdir $(UVM_OBJ_DIR)

.PHONY: uvm uvm-debug uvm-nodebug

uvm:
	@echo "🚀 Building and running UVM testbench (top=$(UVM_TOP_MODULE)) with $(LOG_STATUS)..."
	verilator $(VERILATOR_UVM_FLAGS) \
	  $(UVM_INC) $(UVM_TOP) \
	  $(SRC_SV) \
	  $(TB_SV) \
	  sim/main.cpp
	@echo ""
	@echo "------------------------------------------"
	@echo "Running UVM simulation:"
	@echo "------------------------------------------"
	./$(UVM_OBJ_DIR)/$(UVM_EXE) +UVM_NO_RELNOTES=1 +UVM_VERBOSITY=UVM_LOW $(ARGS)

uvm-debug:
	$(MAKE) uvm DEBUG=1

uvm-nodebug:
	$(MAKE) uvm DEBUG=0
