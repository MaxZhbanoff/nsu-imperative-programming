#include <assert.h>
#include <stdio.h>

#include "smaller_elements.h"

static void test_mixed_values(void)
{
    const int values[] = {4, 3, 5, 1, 2};
    assert(count_smaller_after(values, 5, 0) == 3);
    assert(count_smaller_after(values, 5, 2) == 2);
    assert(count_smaller_after(values, 5, 4) == 0);
}

static void test_equal_values(void)
{
    const int values[] = {3, 3, 3};
    assert(count_smaller_after(values, 3, 0) == 0);
}

int main(void)
{
    test_mixed_values();
    test_equal_values();

    puts("All tests passed successfully");
    return 0;
}
