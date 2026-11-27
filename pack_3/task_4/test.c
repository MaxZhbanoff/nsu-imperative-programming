#include <assert.h>
#include <stdio.h>

#include "letters.h"

static void test_mixed_characters(void)
{
    char text[] = "One 2!";
    int lower, upper, digits;
    int length = calcLetters(text, &lower, &upper, &digits);
    assert(length == 6 && lower == 2 && upper == 1 && digits == 1);
}

static void test_empty_input(void)
{
    char text[] = "";
    int lower = 1, upper = 1, digits = 1;
    assert(calcLetters(text, &lower, &upper, &digits) == 0);
    assert(lower == 0 && upper == 0 && digits == 0);
}

int main(void)
{
    test_mixed_characters();
    test_empty_input();

    puts("All tests passed successfully");
    return 0;
}
