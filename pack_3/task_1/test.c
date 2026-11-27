#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "print_time.h"

static void test_leading_zeros(void)
{
    char text[9];
    printTime(text, 1, 1, 1);
    assert(strcmp(text, "01:01:01") == 0);
}

static void test_boundaries(void)
{
    char text[9];
    printTime(text, 0, 0, 0);
    assert(strcmp(text, "00:00:00") == 0);
    printTime(text, 23, 59, 59);
    assert(strcmp(text, "23:59:59") == 0);
}

int main(void)
{
    test_leading_zeros();
    test_boundaries();

    puts("All tests passed successfully");
    return 0;
}
