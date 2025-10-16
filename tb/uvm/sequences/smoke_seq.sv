class smoke_seq extends uvm_sequence#(mem_seq_item, mem_seq_item);
  `uvm_object_utils(smoke_seq)
  function new(string n="smoke_seq"); super.new(n); endfunction

  task body();
    mem_seq_item t;
    byte unsigned got; // <-- declare at top (Verilator requirement)

    // load two 16-bit program words
    `uvm_create(t) t.op = PMEM_LOAD16; t.addr = 0; t.data = 'h9001; `uvm_send(t)
    `uvm_create(t) t.op = PMEM_LOAD16; t.addr = 1; t.data = 'hF000; `uvm_send(t)

    // write a byte into DMEM
    `uvm_create(t) t.op = DMEM_WRITE8; t.addr = 0; t.data = 42;    `uvm_send(t)

    // start + wait
    `uvm_create(t) t.op = KERNEL_START; `uvm_send(t)
    `uvm_create(t) t.op = POLL_DONE;    `uvm_send(t)

    // read-back check (backdoor)
    got = $root.tb_top.dmem_peek(0);
    `uvm_info("SMOKE", $sformatf("DMEM[0]=%0d", got), UVM_LOW)
  endtask
endclass
