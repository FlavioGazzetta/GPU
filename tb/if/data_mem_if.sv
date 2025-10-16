interface data_mem_if (input bit clk);
  // Backdoor write a single byte into DMEM.
  task automatic write_byte(int addr, byte data);
    $root.tb_top.dmem_poke(addr, data);
  endtask

  // Backdoor read a single byte from DMEM.
  function automatic byte read_byte(int addr);
    return $root.tb_top.dmem_peek(addr);
  endfunction

  // Optional: write a block of bytes.
  task automatic write_block(int base_addr, byte data_bytes[$]);
    foreach (data_bytes[i]) write_byte(base_addr + i, data_bytes[i]);
  endtask

  // Optional: read a block of bytes.
  task automatic read_block(int base_addr, int n, output byte out_bytes[$]);
    out_bytes = {};
    for (int i = 0; i < n; i++) out_bytes.push_back(read_byte(base_addr + i));
  endtask

  task automatic idle_cycles(int cycles);
    repeat (cycles) @(posedge clk);
  endtask

  modport drv (
    import write_byte, read_byte, write_block, read_block, idle_cycles,
    input clk
  );

endinterface
