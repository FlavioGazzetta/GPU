class mem_driver extends uvm_driver#(mem_seq_item, mem_seq_item);
  `uvm_component_utils(mem_driver)

  // Optional analysis port (keep if you already added it)
  uvm_analysis_port#(mem_seq_item) ap;

`ifndef VERILATOR
  virtual program_mem_if pmem_vif;
  virtual data_mem_if    dmem_vif;
  virtual ctrl_if        ctrl_vif;
`endif

  function new(string n, uvm_component p); super.new(n,p); endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    ap = new("ap", this);
`ifndef VERILATOR
    if (!uvm_config_db#(virtual program_mem_if)::get(this,"","pmem_vif", pmem_vif))
      `uvm_fatal("NOVIF","pmem_vif not set")
    if (!uvm_config_db#(virtual data_mem_if)::get(this,"","dmem_vif",  dmem_vif))
      `uvm_fatal("NOVIF","dmem_vif not set")
    if (!uvm_config_db#(virtual ctrl_if)::get(this,"","ctrl_vif",     ctrl_vif))
      `uvm_fatal("NOVIF","ctrl_vif not set")
`endif
  endfunction

  task run_phase(uvm_phase phase);
    mem_seq_item tr;
    forever begin
      seq_item_port.get_next_item(tr);

      case (tr.op)
        PMEM_LOAD16:
`ifndef VERILATOR
          pmem_vif.load_word(tr.addr, tr.data[15:0]);
`else
          $root.tb_top.pmem_write(tr.addr, tr.data[15:0]);
`endif

        DMEM_WRITE8:
`ifndef VERILATOR
          dmem_vif.write_byte(tr.addr, tr.data[7:0]);
`else
          $root.tb_top.dmem_poke(tr.addr, tr.data[7:0]);
`endif

        DMEM_READ8: begin
`ifndef VERILATOR
          void'(dmem_vif.read_byte(tr.addr));
`else
          void'($root.tb_top.dmem_peek(tr.addr));
`endif
        end

        KERNEL_START:
`ifndef VERILATOR
          ctrl_vif.start_kernel();
`else
          $root.tb_top.kick_kernel();
`endif

        POLL_DONE: begin
`ifndef VERILATOR
          ctrl_vif.wait_done();
`else
          wait($root.tb_top.done == 1'b1);
`endif
        end
      endcase

      // publish to analysis (optional)
      if (ap != null) begin
        mem_seq_item c;
        c = mem_seq_item::type_id::create("c", this);
        c.copy(tr);                 // deep-copies fields from tr into c
        ap.write(c);
      end

      seq_item_port.item_done();
    end
  endtask
endclass
