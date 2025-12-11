#include "../include/sh_libc.h"




char *sh_strchr(const char *s, int c)
{
        const unsigned char *p = (const unsigned char *)s;
        unsigned char uc = (unsigned char)c;
        
        while (*p)
        {
            if (*p == uc) 
                return (char *)p;
            p++;
        }
        
        return (uc == '\0') ? (char *)p : NULL;
}
