#include "../include/sh_libc.h"




void *sh_memccpy(void * dest, const void * src,
                     int c, size_t n)
{

    unsigned char * d = (unsigned char *) dest;
    const unsigned char * s = (unsigned char *) src;
    unsigned char uc = (unsigned char)c;

    while (n--)
    {
        *d++ = *s++;
        if (*s == c) return d + 1;
    }

    return NULL;
}
