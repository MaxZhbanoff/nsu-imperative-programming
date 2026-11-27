#include <stdio.h>

#include "extrema.h"

int main(void)
{
    int n, values[20];
    if (scanf("%d", &n) != 1 || n < 1 || n > 20)
        return 1;

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1)
            return 1;
    }

    Extrema result = find_extrema(values, n);
    printf("%d %d %d %d\n", values[result.min_index], result.min_index + 1,
           values[result.max_index], result.max_index + 1);
    return 0;
}
