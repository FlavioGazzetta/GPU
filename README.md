# gpu-extended-from-tiny

A minimal GPU implementation in **SystemVerilog**, built entirely from scratch to explore how GPUs work at a hardware level.  
This project expands upon the original *tiny-gpu* idea with new architectural modules, an improved verification environment, and a proper C++/Verilator-based simulation flow.

---

## Table of Contents
- [gpu-extended-from-tiny](#gpu-extended-from-tiny)
  - [Table of Contents](#table-of-contents)
  - [Overview](#overview)
  - [Architecture](#architecture)
    - [GPU](#gpu)
    - [Device Control Register](#device-control-register)
    - [Dispatcher](#dispatcher)
  - [Memory](#memory)
    - [Global Memory](#global-memory)
    - [Memory Controllers](#memory-controllers)
    - [Cache (WIP)](#cache-wip)
  - [Core](#core)
    - [Scheduler](#scheduler)
    - [Fetcher](#fetcher)
    - [Decoder](#decoder)
    - [Register Files](#register-files)
    - [ALUs](#alus)
    - [LSUs](#lsus)
    - [PCs](#pcs)
  - [ISA](#isa)
  - [Execution](#execution)
    - [Core Flow](#core-flow)
    - [Thread](#thread)
  - [Kernels](#kernels)
    - [Matrix Addition](#matrix-addition)
    - [Matrix Multiplication](#matrix-multiplication)
  - [Simulation](#simulation)
    - [Features](#features)
  - [Build \& Run](#build--run)
    - [Dependencies](#dependencies)
    - [Commands](#commands)
  - [Verification](#verification)
  - [Advanced Functionality](#advanced-functionality)
    - [Multi-Layered Cache \& Shared Memory](#multi-layered-cache--shared-memory)
    - [Memory Coalescing](#memory-coalescing)
    - [Pipelining](#pipelining)
    - [Warp Scheduling](#warp-scheduling)
    - [Branch Divergence](#branch-divergence)
    - [Synchronization \& Barriers](#synchronization--barriers)
  - [Next Steps](#next-steps)
  - [Summary](#summary)

---

## Overview

Modern GPUs are built around massive parallelism, but the **hardware-level design principles** behind them are rarely documented publicly. While GPU programming guides are common, open hardware explanations are not.  

This project aims to fill that gap — it’s a fully working, modular GPU written in **SystemVerilog**, demonstrating how SIMD architectures execute kernels, manage memory, and handle branching.

It extends the original *tiny-gpu* in several major ways:

- ✅ **New architectural modules**: scheduler redesign, branch prediction, enhanced memory controller  
- ✅ **Modular hierarchy** with `dut/src` structure and unified Makefile build system  
- ✅ **C++ simulation harness** with multiple test configurations  
- ✅ **Integrated UVM-style verification** using cocotb and pyuvm  
- ✅ **Configurable logging and debugging** through `DEBUG_LOG` and runtime arguments  

---

## Architecture

<p float="left">
  <img src="/docs/images/gpu.png" alt="GPU" width="48%">
  <img src="/docs/images/core.png" alt="Core" width="48%">
</p>

### GPU

The GPU executes one kernel at a time.  
Before execution begins:
1. The kernel is loaded into program memory  
2. Input data is loaded into data memory  
3. The control register sets the total number of threads and start signal  

**Main components:**
- Device Control Register (DCR)  
- Dispatcher  
- Compute Cores  
- Memory Controllers  
- (WIP) Cache layer  
- (Planned) **Rasterization Unit** — to convert pixel fragments into screen-space output in future versions  

---

### Device Control Register

Stores kernel configuration parameters such as the total thread count, block size, and the kernel launch signal.  
This module acts as the GPU’s “control interface”.

---

### Dispatcher

Distributes thread blocks across available cores and monitors execution progress.  
It supports **multi-core synchronization** and **balanced block assignment** to ensure optimal resource use.

---

## Memory

### Global Memory

- **Data Memory:** 8-bit address × 8-bit data (256 entries)  
- **Program Memory:** 8-bit address × 16-bit instruction width (256 × 16)

### Memory Controllers

Coordinate all requests between compute cores and memory.  
The design supports concurrent instruction and data access, request queuing, and bandwidth throttling.

**Recent work:** Added independent control logic for instruction and data channels, preparing the design for cache integration.

### Cache (WIP)

A future feature that will cache frequently accessed data to reduce latency and global memory pressure.

---

## Core

Each core executes one block of threads at a time.  
Each thread has its own **ALU**, **LSU**, **Program Counter**, and **Register File**.

### Scheduler

Manages instruction issue across all threads in a block.  
I’ve extended this with a **state-based scheduler** to support **warp-level execution** and **branch divergence handling** later on.

### Fetcher

Fetches the current instruction from program memory (and soon, from the instruction cache).

### Decoder

Decodes the instruction into control signals for execution units.

### Register Files

Each thread has a dedicated register file, including:
- General-purpose registers (`R0–R12`)
- Read-only special registers (`%blockIdx`, `%blockDim`, `%threadIdx`)

### ALUs

Perform integer arithmetic and comparison operations:
- `ADD`, `SUB`, `MUL`, `DIV`, `CMP`

The ALU now supports signed arithmetic and has been prepared for pipelining.

### LSUs

Handle memory load/store (`LDR`, `STR`) operations asynchronously through the memory controller.  
Added **stall detection** and **wait-state signaling**.

### PCs

Program counters now hold both the current instruction address and `NZP` flags for branching (`BRnzp`).  
Recently extended with a **basic branch prediction mechanism** that reduces unnecessary stalls and logs prediction outcomes.

---

## ISA

![ISA](/docs/images/isa.png)

Implements an 11-instruction custom ISA supporting both arithmetic and control flow:

- `BRnzp` — Conditional branch  
- `CMP` — Comparison instruction (sets NZP flag)  
- `ADD`, `SUB`, `MUL`, `DIV` — Arithmetic  
- `LDR`, `STR` — Memory operations  
- `CONST` — Load constant  
- `RET` — Return from kernel  

Registers `R0–R12` are general-purpose, while the last three are dedicated to thread/block indices.

---

## Execution

### Core Flow

1. **FETCH** — Load instruction from program memory  
2. **DECODE** — Generate control signals  
3. **REQUEST** — Send memory request (if any)  
4. **WAIT** — Handle stalls or latency  
5. **EXECUTE** — Perform ALU operation  
6. **UPDATE** — Write back to registers  

### Thread

Each thread executes this flow on its own data using the **SIMD (Single Instruction, Multiple Data)** model.  
All threads within a block run in sync, sharing control but processing different data.

---

## Kernels

### Matrix Addition

Adds two 1×8 matrices in parallel.  
Each thread performs one element-wise addition.

```asm
.threads 8
.data 0 1 2 3 4 5 6 7
.data 0 1 2 3 4 5 6 7
...
RET
```
---

### Matrix Multiplication

Multiplies two 2×2 matrices using nested loops and branching.

```asm
.threads 4
.data 1 2 3 4
.data 1 2 3 4
...
RET
```  


## Simulation

Simulation is handled through a **unified Makefile flow** using Verilator and a C++ harness.

### Features
- Per-core and per-thread logging (`DEBUG_LOG`)
- Multiple test configurations (`+test=<name>`)
- Parallel multi-core dispatch
- Adjustable runtime parameters

---

## Build & Run

### Dependencies
- [Verilator](https://verilator.org)
- [cocotb](https://docs.cocotb.org/en/stable/)
- [pyuvm](https://github.com/pyuvm/pyuvm)

### Commands
```bash
# Build & run a test
make run DEBUG=1 +test=matadd

# Run a specific branch prediction test
make run DEBUG=1 +test=branch_pred_even_odd

# Disable logging for speed
make run DEBUG=0

```

## Verification

Verification uses a **UVM-style environment** built on **cocotb + pyuvm**.

- **Monitors** track instruction fetch/decode/writeback  
- **Scoreboard** validates final register and memory states  
- **Coverage bins** record instruction types, branch outcomes, and memory access patterns  
- **Parallel tests** run automatically via the Makefile  

This setup ensures correctness during ongoing development of the scheduler, memory controller, and branch predictor.

---

## Advanced Functionality

### Multi-Layered Cache & Shared Memory
Future versions will include a multi level cache hierarchy and shared memory for intra block communication.

### Memory Coalescing
Merging consecutive memory accesses across threads to improve bandwidth utilization.

### Pipelining
Allowing overlapping instruction execution stages for higher throughput.

### Warp Scheduling
Executing multiple thread groups (warps) in parallel to hide latency.

### Branch Divergence
Handling per thread control flow differences with reconvergence logic.

### Synchronization & Barriers
Allowing threads to synchronize at specific points before continuing execution.

---

## Next Steps

Planned updates and future work:

- [ ] Integrate **instruction cache**
- [ ] Extend **branch prediction** with accuracy tracking
- [ ] Finalize **LSU stall management**
- [ ] Add **lightweight core pipelining**
- [ ] Implement **memory coalescing**
- [ ] Add optional **floating-point support**
- [ ] Optimize **Verilator trace performance**
- [ ] Expand **cocotb test coverage**
- [ ] **Add a rasterization unit** for basic graphics functionality and pixel-level computation

---

## Summary

`gpu-extended-from-tiny` is an evolving educational GPU design that bridges architecture and verification.  
It combines real hardware concepts thread scheduling, branch prediction, and memory management with a modern verification flow, providing both a learning tool and a foundation for future GPU extensions like rasterization and graphics acceleration.