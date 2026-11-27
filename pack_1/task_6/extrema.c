#include "extrema.h"

Extrema find_extrema(const int values[], int count)
{
    Extrema result = {0, 0};
    for (int i = 1; i < count; i++) {
        if (values[i] < values[result.min_index])
            result.min_index = i;
        if (values[i] > values[result.max_index])
            result.max_index = i;
    }
    return result;
}
