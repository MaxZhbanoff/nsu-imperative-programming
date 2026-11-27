#include <assert.h>
#include <stdio.h>

#include "boxes.h"

static void test_small_volumes(void)
{
    assert(count_boxes(1) == 1);
    assert(count_boxes(10) == 16);
}

static void test_maximum_volume(void)
{
    assert(count_boxes(1000000000) == 39218340164LL);
}

int main(void)
{
    test_small_volumes();
    test_maximum_volume();

    puts("All tests passed successfully");
    return 0;
}
