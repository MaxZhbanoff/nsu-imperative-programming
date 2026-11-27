#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "concat.h"

static void test_append(void)
{
    char text[16] = "C";
    char suffix[] = "is";
    char word[] = "cool";
    char *tail = concat(text, suffix);
    assert(tail == text + 3);
    assert(concat(tail, word) == text + 7);
    assert(strcmp(text, "Ciscool") == 0);
}

static void test_empty_suffix(void)
{
    char text[] = "a";
    char empty[] = "";
    assert(concat(text, empty) == text + 1);
    assert(strcmp(text, "a") == 0);
}

int main(void)
{
    test_append();
    test_empty_suffix();

    puts("All tests passed successfully");
    return 0;
}
