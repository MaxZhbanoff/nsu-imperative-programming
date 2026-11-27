#include <stdio.h>
#include <stdlib.h>

#include "step_sum.h"

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0)
        return 1;

    int *values = calloc(n, sizeof(*values));
    if (values == NULL)
        return 1;

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            free(values);
            return 1;
        }
    }

    for (int step = 1; step <= n; step++)
        printf("%lld\n", sum_with_step(values, n, step));

    free(values);
    return 0;
}
