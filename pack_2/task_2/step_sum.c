#include "step_sum.h"

long long sum_with_step(const int values[], int count, int step)
{
    long long sum = 0;
    for (int i = step - 1; i < count; i += step)
        sum += values[i];

    return sum;
}
