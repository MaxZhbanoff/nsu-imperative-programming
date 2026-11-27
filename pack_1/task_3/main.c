#include <stdio.h>

#include "even_sum.h"

int main(void)
{
    int n, values[100];
    if (scanf("%d", &n) != 1 || n < 1 || n > 100)
        return 1;

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }

    printf("%d\n", sum_even(values, n));
    return 0;
}
