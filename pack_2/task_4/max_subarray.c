#include "max_subarray.h"

Subarray max_subarray(const int values[], int count)
{
    Subarray best = {0, 0, values[0]};
    for (int left = 0; left < count; left++) {
        long long sum = 0;
        for (int right = left; right < count; right++) {
            sum += values[right];
            if (sum > best.sum)
                best = (Subarray){left, right, sum};
        }
    }
    return best;
}
