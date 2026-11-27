#include <stdio.h>

#include "prime.h"

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
        return 1;

    puts(is_prime(n) ? "YES" : "NO");
    return 0;
}
