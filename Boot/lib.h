#ifndef _LIB_H
#define _LIB_H

#include "stdint.h"

// Because of the calling conventions each parameter is passed to registers x0 to x7 in order.
void delay(uint64_t value);
void out_word(uint64_t addr, uint32_t value);
uint32_t in_word(uint64_t addr);

void memset(void *dst, int value, unsigned int size);
void memcpy(void *dst, void *src, unsigned int size);
void memmove(void *dst, void *src, unsigned int size);
int memcmp(void *src1, void *src2, unsigned int size);
unsigned char get_el(void);

#endif