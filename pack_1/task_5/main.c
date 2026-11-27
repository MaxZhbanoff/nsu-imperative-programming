#include <stdio.h>

#include "division.h"

int main(void)
{
    int a, b;
    if (scanf("%d %d", &a, &b) != 2 || b <= 0)
        return 1;

    Division result = divide(a, b);
    printf("%d %d %d %d\n", result.down, result.up, result.quotient, result.remainder);
    return 0;
}
