# tests/find_busses.py
import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb.handle import SimHandleBase

def _looks_like_write(name: str) -> bool:
    n = name.lower()
    # Catch common naming patterns
    return (
        ("write" in n or "wr" in n) and
        ("data" in n or "mem" in n or "dmem" in n or "lsu" in n or "store" in n)
    )

def _is_signal(obj) -> bool:
    try:
        # Will have .value if it’s a net/reg
        obj.value
        return True
    except Exception:
        return False

def _walk(node: SimHandleBase, path=""):
    hits = []
    try:
        for child in node:
            name = child._name
            full = f"{path}.{name}" if path else name
            if _is_signal(child) and _looks_like_write(name):
                hits.append(full)
            # Recurse into modules/records/arrays
            try:
                if not _is_signal(child):
                    hits += _walk(child, full)
            except Exception:
                pass
    except Exception:
        pass
    return hits

@cocotb.test()
async def find_write_busses(dut):
    # Give the design a few cycles to elaborate
    for _ in range(3):
        await RisingEdge(dut.clk)

    hits = _walk(dut)
    dut._log.info("=== POSSIBLE WRITE BUS SIGNALS ===")
    for h in sorted(set(hits)):
        dut._log.info(h)

    # Keep sim alive briefly so logs flush
    await Timer(1, units="ns")
