#include <assert.h>
#include <stdio.h>

#include "prime.h"

static void test_primes(void)
{
    assert(is_prime(2));
    assert(is_prime(13));
    assert(is_prime(9973));
}

static void test_non_primes(void)
{
    assert(!is_prime(1));
    assert(!is_prime(4));
    assert(!is_prime(49));
}

int main(void)
{
    test_primes();
    test_non_primes();

    puts("All tests passed successfully");
    return 0;
}
