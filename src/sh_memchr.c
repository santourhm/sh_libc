#include "include/sh_libc.h"



void *sh_memchr(const void * s, int c, size_t n)
{
    const unsigned char * p = (unsigned char *) s;
    unsigned char uc = (unsigned char) c;

    while (n--)
    {
        if(*p == uc) return p;
        p++;
    }

    return NULL;
    
}