#include <stdint.h>
#include <stddef.h>
#include <stdio.h>

uint8_t* memoryBase;
size_t memorySize;

void init(uint8_t* memory, size_t size) {
    memoryBase = memory;
    memorySize = size;
}

uint8_t* processFile(uint8_t* input, size_t length) {
    for (size_t i = 0; i < length; ++i) {
        memoryBase[i] = input[i];
    }
    return memoryBase;
}