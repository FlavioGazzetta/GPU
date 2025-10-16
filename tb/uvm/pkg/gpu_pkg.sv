package gpu_pkg;
  import uvm_pkg::*; `include "uvm_macros.svh"
  `include "tb/uvm/seq_items/mem_seq_item.sv"
  `include "tb/uvm/sequences/smoke_seq.sv"
  `include "tb/uvm/agent_mem/mem_driver.sv"
  `include "tb/uvm/agent_mem/mem_agent.sv"
  `include "tb/uvm/env/gpu_scoreboard.sv"
  `include "tb/uvm/env/gpu_env.sv"
  `include "tb/uvm/tests/gpu_base_test.sv"
  `include "tb/uvm/tests/gpu_smoke_test.sv"
endpackage
