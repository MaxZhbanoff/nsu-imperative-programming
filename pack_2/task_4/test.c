#include <assert.h>
#include <stdio.h>

#include "max_subarray.h"

static void test_positive_run(void)
{
    const int values[] = {-4, 2, -1, 4, -8};
    Subarray best = max_subarray(values, 5);
    assert(best.left == 1 && best.right == 3 && best.sum == 5);
}

static void test_ties_and_negatives(void)
{
    const int negative[] = {-2, -1, -1};
    Subarray best = max_subarray(negative, 3);
    assert(best.left == 1 && best.right == 1 && best.sum == -1);

    const int zeros[] = {0, 0};
    best = max_subarray(zeros, 2);
    assert(best.left == 0 && best.right == 0 && best.sum == 0);
}

int main(void)
{
    test_positive_run();
    test_ties_and_negatives();

    puts("All tests passed successfully");
    return 0;
}
