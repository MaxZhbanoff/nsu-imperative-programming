#include <assert.h>
#include <stdio.h>

#include "step_sum.h"

static void test_different_steps(void)
{
    const int values[] = {4, 3, 5, 1, 2, 9};
    assert(sum_with_step(values, 6, 1) == 24);
    assert(sum_with_step(values, 6, 2) == 13);
    assert(sum_with_step(values, 6, 3) == 14);
    assert(sum_with_step(values, 6, 6) == 9);
}

int main(void)
{
    test_different_steps();

    puts("All tests passed successfully");
    return 0;
}
