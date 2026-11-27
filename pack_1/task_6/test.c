#include <assert.h>
#include <stdio.h>

#include "extrema.h"

static void test_distinct_extrema(void)
{
    const int values[] = {1, 7, -3, 4, 9};
    Extrema result = find_extrema(values, 5);
    assert(result.min_index == 2 && result.max_index == 4);
}

static void test_first_occurrence(void)
{
    const int values[] = {5, 5, 5};
    Extrema result = find_extrema(values, 3);
    assert(result.min_index == 0 && result.max_index == 0);
}

int main(void)
{
    test_distinct_extrema();
    test_first_occurrence();

    puts("All tests passed successfully");
    return 0;
}
