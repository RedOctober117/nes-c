#include <stdint.h>

const ZERO_PAGE = 0x0000;
const STACK = 0x100;
const RAM = 0x0200;
const MIRROR_0 = 0x0800;
const IO_REGISTERS = 0x2000;
const MIRROR_1 = 0x2008;
const EXPANSION_ROM = 0x4020;
const SRAM = 0x6000;
const PRG_ROM_LOWER = 0x8000;
const PRG_ROM_UPPER = 0xC000;

const VRAM_WRAP = 0x3FFF;

struct Nes6502
{
    uint16_t program_counter;
    uint8_t ram[64000];
    uint8_t vram[16000];
    uint8_t stack_pointer;
    uint8_t accumulator;
    uint8_t register_x;
    uint8_t register_y;
    uint8_t processor_status;
};
