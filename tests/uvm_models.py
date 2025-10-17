# tests/uvm_models.py
from dataclasses import dataclass

@dataclass
class GpuCfg:
    num_prog_ch: int
    num_data_ch: int
    depth: int = 256

class ProgramMemModel:
    def __init__(self, image=None, latency=0):
        self.latency = latency
        self.image = [0]*256 if image is None else list(image)

    def load_image(self, image):
        self.image = list(image)

    def fetch(self, addr):
        data = self.image[addr & 0xFF] & 0xFFFF
        return data, self.latency

class DataMemModel:
    def __init__(self, depth=256, read_latency=0, write_latency=0, preload=None):
        self.depth = depth
        self.rlat  = read_latency
        self.wlat  = write_latency
        self.mem   = [0]*depth
        if preload is not None:
            for i, v in enumerate(preload[:depth]):
                self.mem[i] = v & 0xFF

    def read(self, addr):
        return (self.mem[addr % self.depth] & 0xFF), self.rlat

    def write(self, addr, data):
        self.mem[addr % self.depth] = data & 0xFF
        return self.wlat
