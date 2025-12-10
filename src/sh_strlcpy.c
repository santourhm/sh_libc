#include "include/sh_libc.h"





size_t sh_strlcpy(char *dst, const char *src, size_t size)
{
    const char *s = src;
    size_t l = size;
    
    if (l!=0)
    {
        while (--l != 0)
        {
            if((*dst = *s++) == '\0')
                return s - src - 1;
        }
        *dst = '\0';
    }

    while (*s++)
        ;
    
    return (size_t)(s - src - 1);
}