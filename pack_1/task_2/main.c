#include <stdio.h>

#include "surface.h"

int main(void)
{
    int x, y, z;
    if (scanf("%d %d %d", &x, &y, &z) != 3)
        return 1;

    printf("%d\n", surface_area(x, y, z));
    return 0;
}
