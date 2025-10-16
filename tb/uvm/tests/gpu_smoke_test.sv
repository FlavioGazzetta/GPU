class gpu_smoke_test extends uvm_test;
  `uvm_component_utils(gpu_smoke_test)
  gpu_env  env;
  function new(string n, uvm_component p=null); super.new(n,p); endfunction
  function void build_phase(uvm_phase p);
    super.build_phase(p);
    env = gpu_env::type_id::create("env", this);
  endfunction
  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    smoke_seq::type_id::create("sm").start(env.m_agent.seqr);
    phase.drop_objection(this);
  endtask
endclass
