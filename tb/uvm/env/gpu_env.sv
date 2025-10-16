class gpu_env extends uvm_env;
  `uvm_component_utils(gpu_env)

  mem_agent m_agent;
  gpu_scoreboard scb;

  function new(string n, uvm_component p); super.new(n,p); endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    m_agent = mem_agent      ::type_id::create("m_agent", this);
    scb     = gpu_scoreboard ::type_id::create("scb", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    m_agent.ap.connect(scb.item_export);
  endfunction
endclass
