#include <stdio.h>
#include <stdlib.h>

#include "smaller_elements.h"

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

    for (int i = 0; i < n; i++)
        printf("%d ", count_smaller_after(values, n, i));
    putchar('\n');

    free(values);
    return 0;
}
