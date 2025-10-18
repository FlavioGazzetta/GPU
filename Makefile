# ============================================================
# Tiny-GPU Makefile — DEBUG_LOG toggle + ARGS + multi-test run
# ============================================================

TOP_MODULE  = gpu
EXE_NAME    = V$(TOP_MODULE)
OBJ_DIR     = obj_dir

# ---- RTL (recursively gather from dut/src) ----
RTL_DIR     ?= dut/src
SRC_SV      := $(shell find $(RTL_DIR) -type f \( -name '*.sv' -o -name '*.v' -o -name '*.svh' \) 2>/dev/null)

ifeq ($(strip $(SRC_SV)),)
$(error No Verilog/SystemVerilog found under '$(RTL_DIR)'. Adjust RTL_DIR=... or check your tree)
endif

# ---- C++ sim harness ----
SRC_CPP     = cpp/sim_main.cpp
CPP_INC     = -Icpp -Icpp/test

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
# Example: make run ARGS="+test=matmul5x5"
ARGS ?=

# ----- Tool flags -----
CXXFLAGS = -std=c++17 -O3 $(DEBUG_DEF) $(CPP_INC)
LDFLAGS  = -O3

VERILATOR_FLAGS = \
  --sv --cc --exe --build \
  -Wall -Wno-fatal -Wno-UNOPTFLAT \
  --trace --trace-structs \
  $(DEBUG_DEF) \
  -CFLAGS "$(CXXFLAGS)" \
  -LDFLAGS "$(LDFLAGS)" \
  --Mdir $(OBJ_DIR) \
  -top-module $(TOP_MODULE)

# ----- Test set (names must match +test=<name> in your C++ registry) -----
TESTS ?= \
  matadd \
  memcpy \
  add_scalar \
  madd_2a_3b \
  quickret \
  matmul5x5

# ----- Targets -----
.PHONY: all cpp build run run-all run-debug run-nodebug \
        test_matadd test_matmul5x5 clean

all: run

# Build only
build:
	@echo "🔨 Building $(TOP_MODULE) with $(LOG_STATUS)..."
	verilator $(VERILATOR_FLAGS) $(SRC_SV) $(SRC_CPP)

# Build + single run (uses ARGS)
run: build
	@echo ""
	@echo "------------------------------------------"
	@echo "Running simulation:"
	@echo "------------------------------------------"
	./$(OBJ_DIR)/$(EXE_NAME) $(ARGS)

# Build + run the whole TESTS suite with PASS/FAIL summary
run-all: build
	@echo ""
	@echo "=========================================="
	@echo " Running all C++ tests: $(TESTS)"
	@echo "=========================================="
	@pass=0; fail=0; results=""; \
	for t in $(TESTS); do \
	  echo ""; \
	  echo ">>> ▶  $$t"; \
	  echo "------------------------------------------"; \
	  if ./$(OBJ_DIR)/$(EXE_NAME) +test=$$t; then \
	    pass=$$((pass+1)); results="$$results\n  ✓ $$t"; \
	  else \
	    fail=$$((fail+1)); results="$$results\n  ✗ $$t"; \
	  fi; \
	done; \
	echo ""; \
	echo "=========================================="; \
	echo " Test Summary"; \
	echo "=========================================="; \
	printf "%b\n" "$$results"; \
	echo ""; \
	echo "Passed: $$pass  Failed: $$fail  Total: $$((pass+fail))"; \
	[ $$fail -eq 0 ] && echo "✅ All tests passed" || (echo "❌ One or more tests failed"; exit 1)

# Alias: "make cpp" builds and runs ALL tests with summary
cpp: run-all

# Convenience shortcuts
test_matadd:
	$(MAKE) run ARGS="+test=matadd"       DEBUG=$(DEBUG)

test_matmul5x5:
	$(MAKE) run ARGS="+test=matmul5x5"    DEBUG=$(DEBUG)

run-debug:
	$(MAKE) run DEBUG=1

run-nodebug:
	$(MAKE) run DEBUG=0

clean:
	@echo "🧹 Cleaning build directory..."
	rm -rf $(OBJ_DIR) *.vcd *.fst *.log
