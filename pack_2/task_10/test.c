#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "permutation.h"

static void test_suffix_reversal(void)
{
    char letters[] = "qzw";
    next_permutation(letters, 3);
    assert(strcmp(letters, "wqz") == 0);
}

static void test_last_two_letters(void)
{
    char letters[] = "abcde";
    next_permutation(letters, 5);
    assert(strcmp(letters, "abced") == 0);
}

int main(void)
{
    test_suffix_reversal();
    test_last_two_letters();

    puts("All tests passed successfully");
    return 0;
}
