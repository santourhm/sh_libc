#include "../include/sh_libc.h"



int sh_memcmp(const void * s1, const void * s2, size_t n)
{
    
    unsigned char * p = (unsigned char *) s1;
    unsigned char * q = (unsigned char *) s2;
    int             d = 0;

    for (size_t i = 0; i < n; i++)
	{
		d = p[i] - q[i];
		if(d!=0) return d;
	}

    return d ;
}
