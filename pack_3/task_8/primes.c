#include "primes.h"

void mark_composites(int limit, unsigned char composite[])
{
    for (int prime = 2; prime <= limit / prime; prime++) {
        if (composite[prime])
            continue;

        for (int multiple = prime * prime; multiple <= limit; multiple += prime)
            composite[multiple] = 1;
    }
}
