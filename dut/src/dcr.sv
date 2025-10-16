`default_nettype none
`timescale 1ns/1ns

// DEVICE CONTROL REGISTER
// > Used to configure high-level settings
// > In this minimal example, the DCR is used to configure the number of threads to run for the kernel
module dcr (
    input  logic clk,
    input  logic reset,

    input  logic        device_control_write_enable,
    input  logic [7:0]  device_control_data,
    output logic [7:0]  thread_count
);
    // Store device control data in dedicated register
    logic [7:0] device_control_register;

    assign thread_count = device_control_register;

    always_ff @(posedge clk) begin
        if (reset) begin
            device_control_register <= 8'b0;
        end else if (device_control_write_enable) begin
            device_control_register <= device_control_data;
        end
    end
endmodule
