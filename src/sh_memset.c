#include "../include/sh_libc.h"




void * sh_memset(void*  s, int c, size_t n)
{
	unsigned char *p = (unsigned char *) s;
	while(n--)
		*p++ = (unsigned char)c;
	return s;
}
