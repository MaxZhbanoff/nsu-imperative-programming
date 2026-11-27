#include "prime.h"

int is_prime(int n)
{
    if (n < 2)
        return 0;

    for (int divisor = 2; divisor <= n / divisor; divisor++) {
        if (n % divisor == 0)
            return 0;
    }
    return 1;
}
