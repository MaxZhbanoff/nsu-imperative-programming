#include <assert.h>
#include <stdio.h>

#include "surface.h"

static void test_valid_dimensions(void)
{
    assert(surface_area(3, 4, 5) == 94);
    assert(surface_area(1, 1, 1) == 6);
}

static void test_invalid_dimensions(void)
{
    assert(surface_area(-1, 0, 0) == -1);
    assert(surface_area(1, 0, 1) == -2);
    assert(surface_area(1, 1, -1) == -3);
}

int main(void)
{
    test_valid_dimensions();
    test_invalid_dimensions();

    puts("All tests passed successfully");
    return 0;
}
