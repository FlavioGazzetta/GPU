interface ctrl_if (input bit clk, output bit start, input bit done);

  // Pulse 'start' for one cycle.
  task automatic start_kernel();
    @(posedge clk); start <= 1'b1;
    @(posedge clk); start <= 1'b0;
  endtask

  // Busy-wait until the DUT asserts 'done'.
  task automatic wait_done();
    wait (done == 1'b1);
  endtask

  // Set the device thread count through tb_top's DCR helper.
  task automatic set_thread_count(byte threads);
    $root.tb_top.set_thread_count(threads);
  endtask

  task automatic idle_cycles(int cycles);
    repeat (cycles) @(posedge clk);
  endtask

  modport drv (
    import start_kernel, wait_done, set_thread_count, idle_cycles,
    input done, clk,
    output start
  );

endinterface
