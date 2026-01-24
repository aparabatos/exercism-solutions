#include "grains.h"

uint64_t square(uint8_t index)
{
    uint64_t n = 0;
    if (index > 0 && index < 65)
    {
        n = 1;
        for (int i = 0; i < index - 1; i++)
            n *= 2;
    }
    return (n);
}

uint64_t total(void)
{
    uint64_t n = 1, total = 0;
    
    for (uint64_t i = 0; i < 64; i++, n *= 2)
        total += n;
    return (total);
}