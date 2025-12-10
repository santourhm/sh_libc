#include "include/sh_libc.h"


size_t sh_strlcat(char *dst, const char *src, size_t size)
{

        sh_stpcpy(dst + sh_strlen(dst), src,size);
        return dst;
        
}