#ifndef __IDRIS_BUFFER_H
#define __IDRIS_BUFFER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void* idris2_newBuffer(int bytes);
void idris2_freeBuffer(void* buf);

int idris2_getBufferSize(void* buffer);

void idris2_setBufferByte(void* buffer, int loc, int byte);
void idris2_setBufferInt(void* buffer, int loc, int val);
void idris2_setBufferDouble(void* buffer, int loc, double val);
void idris2_setBufferString(void* buffer, int loc, char* str);

void idris2_copyBuffer(void* from, int start, int len,
                       void* to, int loc);

// Reading and writing the raw data, to the pointer in the buffer
int idris2_readBufferData(FILE* h, char* buffer, int loc, int max);
int idris2_writeBufferData(FILE* h, char* buffer, int loc, int len);

int idris2_getBufferByte(void* buffer, int loc);
int idris2_getBufferInt(void* buffer, int loc);
double idris2_getBufferDouble(void* buffer, int loc);
char* idris2_getBufferString(void* buffer, int loc, int len);

#endif
