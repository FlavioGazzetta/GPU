interface program_mem_if (input bit clk);

  // Load a single 16-bit instruction word into program memory (backdoor).
  task automatic load_word(int addr, logic [15:0] data);
    // Backdoor into tb_top's PMEM model:
    $root.tb_top.pmem_write(addr, data);
  endtask

  // Optional convenience: load a whole program image starting at base_addr.
  task automatic load_image(int base_addr, logic [15:0] img[], int n_words);
    for (int i = 0; i < n_words; i++) begin
      load_word(base_addr + i, img[i]);
    end
  endtask

  // (Optional) delay helper if you want deterministic spacing from sequences.
  task automatic idle_cycles(int cycles);
    repeat (cycles) @(posedge clk);
  endtask

  // Driver-facing modport (export tasks)
  modport drv (
    import load_word, load_image, idle_cycles,
    input clk
  );

endinterface
