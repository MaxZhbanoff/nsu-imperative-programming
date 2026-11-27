#include <stdio.h>

#include "primes.h"

int main(void)
{
    enum { MAX_LIMIT = 5000 };
    int limit;
    if (scanf("%d", &limit) != 1 || limit < 2 || limit > MAX_LIMIT)
        return 1;

    unsigned char composite[MAX_LIMIT + 1] = {0};
    mark_composites(limit, composite);
    for (int n = 2; n <= limit; n++) {
        if (!composite[n])
            printf("%d\n", n);
    }
    return 0;
}
