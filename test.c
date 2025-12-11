#include "unity/unity.h"
#include "include/sh_libc.h" 
#include <string.h>
#include <stdlib.h>
void setUp(void) {}
void tearDown(void) {}

void test_strlen() {
    TEST_ASSERT_EQUAL_UINT(sh_strlen("Hello"), sh_strlen("Hello"));
    TEST_ASSERT_EQUAL_UINT(strlen(""), sh_strlen(""));
    TEST_ASSERT_EQUAL_UINT(strlen("a\nb"), sh_strlen("a\nb"));
}

    
void test_strncmp()
{
    TEST_ASSERT_EQUAL_UINT(strncmp("HAMZA","HAMSA",5),sh_strncmp("HAMZA","HAMSA",5));
    TEST_ASSERT_EQUAL_UINT(strncmp("HAMZA","HAMZA",5),sh_strncmp("HAMZA","HAMZA",5));
    TEST_ASSERT_EQUAL_UINT(strncmp("H\nb","HAMZA",2),sh_strncmp("H\nb","HAMZA",2));

}


void test_strlcat()
{
    char * p1 = malloc(15);
    p1[0] = 'H'; 
    p1[1] = 'A';
    p1[2] = 'M';
    p1[3] = 'Z';
    char * p2 = malloc(15);
    p2[0] = 'H'; 
    p2[1] = 'A';
    p2[2] = 'M';
    p2[3] = 'Z';
    TEST_ASSERT_EQUAL_UINT(strlcat(p1,"SANTOURA",8),sh_strlcat(p2,"SANTOURA",8));

    
    printf(" libc (%s)\n",strlcat(p1,"SANTOURA",8));
    printf(" sh_libc (%s)\n",sh_strlcat(p2,"SANTOURA",8));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_strlen);
    RUN_TEST(test_strncmp);
    RUN_TEST(test_strlcat);
    return UNITY_END();
}
