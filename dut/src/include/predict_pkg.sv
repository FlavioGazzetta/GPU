package predict_pkg;
  typedef struct packed {
    logic        valid;
    logic        pred_taken;
    logic [31:0] pred_target;
    logic [7:0]  warp_id;
    logic [31:0] pc_at_fetch;
  } pred_meta_t;
endpackage
