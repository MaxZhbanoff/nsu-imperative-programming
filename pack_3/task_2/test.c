#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "reverse.h"

static void test_even_and_odd_lengths(void)
{
    char even[] = "cool";
    char odd[] = "Hello";
    reverse(even, 4);
    reverse(odd, 5);
    assert(strcmp(even, "looc") == 0);
    assert(strcmp(odd, "olleH") == 0);
}

static void test_short_strings(void)
{
    char empty[] = "";
    char single[] = "C";
    reverse(empty, 0);
    reverse(single, 1);
    assert(empty[0] == '\0');
    assert(strcmp(single, "C") == 0);
}

int main(void)
{
    test_even_and_odd_lengths();
    test_short_strings();

    puts("All tests passed successfully");
    return 0;
}
