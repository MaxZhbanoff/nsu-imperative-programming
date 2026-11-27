#include "smaller_elements.h"

int count_smaller_after(const int values[], int count, int index)
{
    int smaller = 0;
    for (int i = index + 1; i < count; i++) {
        if (values[i] < values[index])
            smaller++;
    }
    return smaller;
}
