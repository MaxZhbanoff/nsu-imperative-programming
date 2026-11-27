#include <stdio.h>
#include <stdlib.h>

#include "date_time.h"

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n <= 0) {
        return 0;
    }

    DateTime* a = calloc((size_t)n, sizeof(DateTime));
    if (a == NULL) {
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d %d %d %d %d %d", 
                  &a[i].year, &a[i].month, &a[i].day,
                  &a[i].hours, &a[i].minutes, &a[i].seconds) != 6) {
            free(a);
            return 1; 
        }
    }

    DateTime earliest = min(a, n);

    printf("%d %d %d %d %d %d\n",
           earliest.year, earliest.month, earliest.day,
           earliest.hours, earliest.minutes, earliest.seconds);

    free(a);

    return 0;
}
