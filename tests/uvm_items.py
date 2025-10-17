# tests/uvm_items.py
from pyuvm import *

class GpuTxn(uvm_sequence_item):
    def __init__(self, name="GpuTxn"):
        super().__init__(name)
        # For program/data memory transactions
        self.is_read = True
        self.addr    = 0
        self.data    = 0
        self.latency = 0  # cycles to respond

    def randomize(self):
        # plug in constraints as needed
        return self
