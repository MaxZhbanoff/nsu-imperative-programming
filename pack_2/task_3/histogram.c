#include "histogram.h"
#include <stdlib.h>

static int compare_ints(const void *left, const void *right)
{
    int a = *(const int *)left;
    int b = *(const int *)right;
    return (a > b) - (a < b);
}


void write_histogram(int values[], int count, FILE *out)
{
    qsort(values, count, sizeof(*values), compare_ints);
    for (int start = 0; start < count;) {
        int end = start + 1;
        while (end < count && values[end] == values[start])
            end++;

        fprintf(out, "%d: %d\n", values[start], end - start);
        start = end;
    }
}
