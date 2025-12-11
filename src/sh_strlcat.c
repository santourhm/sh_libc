#include "../include/sh_libc.h"


size_t sh_strlcat(char *dst, const char *src, size_t size)
{
        
        char *d = dst;
        const char * s = src;
        size_t dsize ;
        size_t n = size ;
        
        while(n-- && *d!='\0')
                d++;
        

        dsize = d - dst;
        n = size - dsize;
        
        if (size == 0)
                return ( dsize + sh_strlen(src)); 

        while (*s!='\0' )
        {
                if(n != 1)
                {
                        *d++=*s;
                        n--;
                }
                s++;
        }
        *d = '\0';
        
        return dsize + (s - src); 
}