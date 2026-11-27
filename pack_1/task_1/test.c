#include <assert.h>
#include <stdio.h>

#include "sum.h"

static void test_sample(void)
{
    assert(sum_to(5) == 15);
}

static void test_limits(void)
{
    assert(sum_to(1) == 1);
    assert(sum_to(100) == 5050);
}

int main(void)
{
    test_sample();
    test_limits();

    puts("All tests passed successfully");
    return 0;
}
