#include "../include/sh_libc.h"


void *sh_memmove(void * dest, const void * src, size_t n)
{
    unsigned char * d = (unsigned char *) dest;
    unsigned char * s = (unsigned char *) src;
    
    if( s < d && d < s + n)
    {
        while (n--)
             *(d+n) = *(s+n);    
    }
    else
    {
        while (n--)
            *d++ = *s++;
    }

    return dest;
}
