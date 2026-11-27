#include "surface.h"

int surface_area(int x, int y, int z)
{
    if (x <= 0)
        return -1;
    if (y <= 0)
        return -2;
    if (z <= 0)
        return -3;

    return 2 * (x * y + y * z + x * z);
}
