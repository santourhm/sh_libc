#ifndef SH_LIBC_H
#define SH_LIBC_h

#include <stddef.h>

void * sh_memset(void*,int,size_t);
void sh_bzero(void*,size_t);
void *sh_memcpy(void * dest, const void * src,
                    size_t n);
void *sh_memccpy(void * dest, const void * src,
                     int c, size_t n);       
void *sh_memchr(const void * s, int c, size_t n);
int sh_memcmp(const void * s1, const void * s2, 
                            size_t n);
size_t sh_strlen(const char *s);

size_t sh_strlcat(char *d, const char *s, size_t size);

#endif 
