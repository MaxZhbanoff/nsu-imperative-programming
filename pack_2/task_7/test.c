#include <assert.h>
#include <stdio.h>

#include "sort.h"

static void test_duplicates_and_negatives(void)
{
    int values[] = {3, 1, -4, 3, 0};
    const int expected[] = {-4, 0, 1, 3, 3};
    sort_values(values, 5);
    for (int i = 0; i < 5; i++)
        assert(values[i] == expected[i]);
}

int main(void)
{
    test_duplicates_and_negatives();

    puts("All tests passed successfully");
    return 0;
}
