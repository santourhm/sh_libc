#include "../include/sh_libc.h"


void *sh_memcpy(void * dest, const void * src,
                    size_t n)
{
    unsigned char * d = (unsigned char *)dest;
    const unsigned char * s = (unsigned char *)src;

    while (n--)
        *d++ = *s++;
    
    return dest;
}