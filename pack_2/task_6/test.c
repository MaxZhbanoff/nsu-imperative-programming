#include <assert.h>
#include <stdio.h>

#include "set_difference.h"

static void test_unique_ordered_result(void)
{
    int a[] = {8, 2, 3, 3, 8, 1};
    int b[] = {3, 1, 9};
    int count = set_difference(a, 6, b, 3);
    assert(count == 2 && a[0] == 2 && a[1] == 8);
}

static void test_empty_result(void)
{
    int a[] = {2, 2};
    int b[] = {2};
    assert(set_difference(a, 2, b, 1) == 0);
}

int main(void)
{
    test_unique_ordered_result();
    test_empty_result();

    puts("All tests passed successfully");
    return 0;
}
