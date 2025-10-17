# tests/coverage.py
"""
Functional coverage hooks.
- If cocotb-coverage is installed, we record bins and can export YAML.
- If not installed, everything becomes a no-op so tests still run.
"""

try:
    from cocotb_coverage.coverage import CoverPoint, CoverCross, coverage_db
    _HAS_COV = True
except Exception:
    _HAS_COV = False

    # no-op fallbacks
    def CoverPoint(*args, **kwargs):
        def deco(f): return f
        return deco

    def CoverCross(*args, **kwargs):
        def deco(f): return f
        return deco

    class _CovDB:
        def export_to_yaml(self, path):
            # create a tiny placeholder so downstream scripts don't break
            with open(path, "w") as f:
                f.write("# coverage disabled (cocotb-coverage not installed)\n")
    coverage_db = _CovDB()

# ---- Points ----
@CoverPoint("gpu.opcode",
            xf=lambda s: s.opcode, bins=list(range(0x0, 0x10)))
def cp_opcode(s): pass

@CoverPoint("gpu.branch.outcome",
            xf=lambda s: s.nzp_outcome, bins=["N","Z","P","NZ","NP","ZP"])
def cp_branch(s): pass

@CoverCross("gpu.branch.cross", items=[cp_opcode, cp_branch])
def cross_branch(s): pass

def sample_cov(sample):
    # sample is a SimpleNamespace with at least: opcode, is_branch, [nzp_outcome]
    cp_opcode(sample)
    if getattr(sample, "is_branch", False):
        if getattr(sample, "nzp_outcome", None) is not None:
            cp_branch(sample)
            cross_branch(sample)

def report_cov():
    # Always writes a file; it will be a stub when coverage is disabled
    coverage_db.export_to_yaml("coverage.yml")
