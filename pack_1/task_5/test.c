#include <assert.h>
#include <stdio.h>

#include "division.h"

static void test_rounding(void)
{
    Division positive = divide(7, 3);
    assert(positive.down == 2 && positive.up == 3);
    assert(positive.quotient == 2 && positive.remainder == 1);

    Division negative = divide(-100, 3);
    assert(negative.down == -34 && negative.up == -33);
    assert(negative.quotient == -33 && negative.remainder == 2);
}

static void test_exact_division(void)
{
    Division exact = divide(-10, 5);
    assert(exact.down == -2 && exact.up == -2);
    assert(exact.quotient == -2 && exact.remainder == 0);
}

int main(void)
{
    test_rounding();
    test_exact_division();

    puts("All tests passed successfully");
    return 0;
}
