#include "../include/sh_libc.h"



char *sh_strrchr(const char *p, int c)
{
    for(;;++p) 
    {
        if (*p == c )
            return (char*)p;
        if(!*p)
            return ((char*)NULL);
    }
    
}
