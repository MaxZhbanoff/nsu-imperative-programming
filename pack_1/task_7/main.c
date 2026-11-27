#include <stdio.h>

#include "apartment.h"

int main(void)
{
    int n, m, p, k, floors;
    if (scanf("%d %d %d %d %d", &n, &m, &p, &k, &floors) != 5 || floors <= 0)
        return 1;

    Location result = locate_apartment(n, m, p, k, floors);
    if (result.entrance != 0)
        printf("%d %d\n", result.entrance, result.floor);
    return 0;
}
