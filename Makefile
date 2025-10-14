# ============================================================
# Tiny-GPU Makefile — proper DEBUG_LOG toggle + ARGS support
# ============================================================

TOP_MODULE  = gpu
EXE_NAME    = V$(TOP_MODULE)
OBJ_DIR     = obj_dir

SRC_SV = \
  src/alu.sv \
  src/controller.sv \
  src/core.sv \
  src/dcr.sv \
  src/decoder.sv \
  src/dispatch.sv \
  src/fetcher.sv \
  src/lsu.sv \
  src/pc.sv \
  src/registers.sv \
  src/scheduler.sv \
  src/gpu.sv

SRC_CPP = cpp/sim_main.cpp

# ----- Debug toggle -----
# Use: make run            (DEBUG=1 default)
#      make run-nodebug    (DEBUG=0)
#      make run DEBUG=0
DEBUG ?= 1

ifeq ($(DEBUG),1)
  DEBUG_DEF   = -DDEBUG_LOG
  LOG_STATUS  = DEBUG_LOG enabled
else
  DEBUG_DEF   =
  LOG_STATUS  = DEBUG_LOG DISABLED
endif

# ----- Custom run arguments -----
# Usage example:
#   make run ARGS="+test=matmul5x5"
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

# ----- Targets -----
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

# Convenience shortcuts
run-debug:
	$(MAKE) run DEBUG=1

run-nodebug:
	$(MAKE) run DEBUG=0

clean:
	@echo "🧹 Cleaning build directory..."
	rm -rf $(OBJ_DIR) *.vcd *.fst *.log
