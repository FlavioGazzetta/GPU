UVM_ROOT ?= $(PWD)/../third_party/uvm
VERILATOR ?= verilator

# Common flags (enable class/timing and UVM support)
VL_FLAGS = -Wall -Wno-UNOPTFLAT -Wno-BLKANDNBLK \
           --timing --trace --trace-structs --trace-max-array 256 \
           --cc --exe --build \
           --threads 0 --coverage \
           -CFLAGS "-DVL_DEBUG" 

UVM_INC  = +incdir+$(UVM_ROOT)/src
UVM_TOP  = $(UVM_ROOT)/src/uvm_pkg.sv

OBJDIR   = ../build

run: $(OBJDIR)/Vtb_top
	cd $(OBJDIR) && ./Vtb_top +UVM_NO_RELNOTES=1 +UVM_VERBOSITY=UVM_LOW

$(OBJDIR)/Vtb_top:
	mkdir -p $(OBJDIR)
	$(VERILATOR) $(VL_FLAGS) \
	  -Mdir $(OBJDIR) \
	  -f ../dut/filelist.f \
	  -f ../sim/verilator.f \
	  $(UVM_INC) $(UVM_TOP) \
	  ../sim/main.cpp

clean:
	rm -rf $(OBJDIR)
