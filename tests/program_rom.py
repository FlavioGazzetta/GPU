# tests/program_rom.py
# Opcodes per your decoder
NOP, BRNZP, CMP, ADD, SUB, MUL, DIV, LDR, STR, CONST, RET = \
    0x0, 0x1,   0x2, 0x3, 0x4, 0x5, 0x6,  0x7, 0x8,  0x9,   0xF

def enc(op, rd=0, rs=0, rt=0, imm8=0):
    """Encode 16b instruction: [15:12]=op, [11:8]=rd, [7:4]=rs, [3:0]=rt
       For CONST/BRnzp we’ll also use imm8 in [7:0] (your decoder reads that)."""
    return ((op & 0xF) << 12) | ((rd & 0xF) << 8) | ((rs & 0xF) << 4) | (rt & 0xF) | ((imm8 & 0xFF) << 0)

def demo_program():
    prog = [0] * 256
    # CONST R1, #5  (rd=1, imm=5)
    prog[0] = enc(CONST, rd=1, imm8=5)
    # ADD R2, R1, R1
    prog[1] = enc(ADD, rd=2, rs=1, rt=1)
    # RET
    prog[2] = enc(RET)
    return prog
