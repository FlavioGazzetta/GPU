class gpu_scoreboard extends uvm_component;
  `uvm_component_utils(gpu_scoreboard)

  // Let env connect an analysis producer to us
  uvm_analysis_export#(mem_seq_item) item_export;
  uvm_tlm_analysis_fifo#(mem_seq_item) fifo;

  function new(string n, uvm_component p); super.new(n,p); endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    item_export = new("item_export", this);
    fifo        = new("fifo", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    item_export.connect(fifo.analysis_export);
  endfunction

  task run_phase(uvm_phase phase);
    mem_seq_item tr;
    forever begin
      fifo.get(tr);
      `uvm_info("SCB", $sformatf("Got txn: op=%0d addr=%0d data=0x%0h",
                tr.op, tr.addr, tr.data), UVM_LOW)
      // TODO: add checking against a reference model or DMEM mirror
    end
  endtask
endclass
