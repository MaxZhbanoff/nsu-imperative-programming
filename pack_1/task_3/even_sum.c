#include "even_sum.h"

int sum_even(const int values[], int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++) {
        if (values[i] % 2 == 0)
            sum += values[i];
    }
    return sum;
}
