#include <stdio.h>
#include <stdlib.h>

#include "set_difference.h"

static int *read_array(int *count)
{
    if (scanf("%d", count) != 1 || *count <= 0)
        return NULL;

    int *values = calloc(*count, sizeof(*values));
    if (values == NULL)
        return NULL;

    for (int i = 0; i < *count; i++) {
        if (scanf("%d", &values[i]) != 1) {
            free(values);
            return NULL;
        }
    }
    return values;
}

int main(void)
{
    int n, k;
    int *a = read_array(&n);
    int *b = read_array(&k);
    if (a == NULL || b == NULL) {
        free(a);
        free(b);
        return 1;
    }

    int count = set_difference(a, n, b, k);
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
        printf("%d ", a[i]);
    if (count > 0)
        putchar('\n');

    free(a);
    free(b);
    return 0;
}
