#include <assert.h>
#include <stdio.h>

#include "primes.h"

static void test_primes_and_composites(void)
{
    unsigned char composite[11] = {0};
    mark_composites(10, composite);
    assert(!composite[2] && !composite[3] && !composite[5] && !composite[7]);
    assert(composite[4] && composite[6] && composite[8] && composite[9] && composite[10]);
}

static void test_maximum_limit(void)
{
    unsigned char composite[5001] = {0};
    mark_composites(5000, composite);
    assert(!composite[4999] && composite[5000]);
}

int main(void)
{
    test_primes_and_composites();
    test_maximum_limit();

    puts("All tests passed successfully");
    return 0;
}
