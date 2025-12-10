#include "include/sh_libc.h"
#include <stdio.h>


static int sh_memset_test()
{
	unsigned char T[5];
	
	sh_memset(T,0xFF,5);

	for (size_t i=0; i<5;i++)
		if(T[i] != 0xFF) return -1;
	
	return 1;
	
}


static int sh_bzero_test()
{
	unsigned char T[5];

	sh_bzero(T,5);

	for(size_t i=0; i < 5; i++)
		if(T[i] != '\0') return -1;

	return 1;
}

static void test_sh_memccpy()
{
	char src[] = "Hello, world!";
    char dest[20] = {0};

    char *ret = sh_memccpy(dest, src, 'o', 20);

    printf("Source: %s\n", src);
    printf("Destination after sh_memccpy: %s\n", dest);

    if (ret != NULL) {
        printf("Stopped at character 'o', returned pointer points to dest + %ld\n", ret - dest);
    } else {
        printf("Character not found, returned NULL\n");
    }

    char dest2[20] = {0};
    ret = sh_memccpy(dest2, src, 'x', 20);
    printf("\nDestination when character not found: %s\n", dest2);
    if (ret == NULL) {
        printf("Character 'x' not found, returned NULL\n");
    }

}

int main()
{


	if(sh_memset_test() < 0|| sh_bzero_test() < 0)
	{
		printf("ONE OR MORE TEST(s) FAILED\n");
		return 1;
	}
	test_sh_memccpy();
	printf("ALL TESTS PASSED\n");
	return 0;
}
