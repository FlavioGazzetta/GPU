class mem_agent extends uvm_agent;
  `uvm_component_utils(mem_agent)

  // Use TWO-type templated base directly
  uvm_sequencer#(mem_seq_item, mem_seq_item) seqr;
  mem_driver                                 drv;

  uvm_analysis_port#(mem_seq_item) ap;

  function new(string n, uvm_component p); super.new(n,p); endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    ap   = new("ap", this);

    // IMPORTANT: construct the sequencer directly (no factory)
    seqr = new("seqr", this);

    // Driver from factory is fine
    drv  = mem_driver::type_id::create("drv", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    drv.seq_item_port.connect(seqr.seq_item_export);
    if (drv.ap != null) drv.ap.connect(ap);
  endfunction
endclass
