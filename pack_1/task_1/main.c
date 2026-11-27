#include <stdio.h>

#include "sum.h"

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
        return 1;

    printf("%d\n", sum_to(n));
    return 0;
}
