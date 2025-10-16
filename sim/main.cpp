#include "verilated.h"
#include "Vtb_top.h"

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_top top;

    while (!Verilated::gotFinish()) {
        top.eval();
        main_time++;
    }
    return 0;
}
