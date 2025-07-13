#include <stdint.h>

struct Nes6502
{
    uint8_t ram[64000];
    uint16_t program_counter;
    uint8_t stack_pointer;
    uint8_t accumulator;
    uint8_t register_x;
    uint8_t register_y;
    uint8_t processor_status;
};
