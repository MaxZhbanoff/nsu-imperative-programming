#include <assert.h>
#include <stdio.h>

#include "apartment.h"

static void test_different_entrances(void)
{
    Location result = locate_apartment(100, 50, 2, 4, 9);
    assert(result.entrance == 3 && result.floor == 7);
}

static void test_same_entrance(void)
{
    Location result = locate_apartment(11, 10, 1, 2, 5);
    assert(result.entrance == 1 && result.floor == 3);
}

int main(void)
{
    test_different_entrances();
    test_same_entrance();

    puts("All tests passed successfully");
    return 0;
}
