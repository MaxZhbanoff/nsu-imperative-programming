#include <assert.h>
#include <stdio.h>

#include "even_sum.h"

static void test_mixed_values(void)
{
    const int values[] = {2, 3, -4, -5, 8};
    assert(sum_even(values, 5) == 6);
}

static void test_no_even_values(void)
{
    const int values[] = {1, -3, 5};
    assert(sum_even(values, 3) == 0);
}

int main(void)
{
    test_mixed_values();
    test_no_even_values();

    puts("All tests passed successfully");
    return 0;
}
