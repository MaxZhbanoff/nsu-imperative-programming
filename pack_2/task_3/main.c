#include <stdio.h>
#include <stdlib.h>

#include "histogram.h"

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

    write_histogram(values, n, stdout);

    free(values);
    return 0;
}
