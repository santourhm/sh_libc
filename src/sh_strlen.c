#include "include/sh_libc.h"




size_t sh_strlen(const char *s)
{
    int c = 0;
    
    while (*s != '\0')
    {
        c++;
        s++;
    }

    return c;
}