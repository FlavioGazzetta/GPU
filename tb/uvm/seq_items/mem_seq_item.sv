// Package-scope enum so constants are visible to everything in gpu_pkg
typedef enum int {
  PMEM_LOAD16,
  DMEM_WRITE8,
  DMEM_READ8,
  KERNEL_START,
  POLL_DONE
} gpu_op_e;

class mem_seq_item extends uvm_sequence_item;
  rand gpu_op_e op;
  rand int      addr;
  rand int      data; // [15:0] for PMEM, [7:0] for DMEM
  `uvm_object_utils(mem_seq_item)
  function new(string name="mem_seq_item"); super.new(name); endfunction
endclass
