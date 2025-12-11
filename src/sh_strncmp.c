#include "../include/sh_libc.h"




int sh_strncmp(const char * s1, const char * s2, size_t n)
{
    unsigned char * l = (unsigned char *) s1;
    unsigned char * r = (unsigned char *) s2;

    while (n--)
    {
        if(*l!=*r) 
            return (int)(*l - *r);
        if(*l == '\0')
            return 0;
        l++;
        r++;

    }   
     
    return 0;
}