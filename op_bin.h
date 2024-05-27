#pragma once

//void show_bin8(uint8_t value);
void show_bin32(uint32_t value);
//uint32_t set_bit32(uint32_t data, uint8_t bit_pos, bool bit_value);
//uint32_t toggle_bit32(uint32_t data, uint8_t bit_pos);
//uint32_t carry_rotate32(uint32_t data, int N);
uint32_t extract_segment(uint32_t data, int startBit, int endBit);