#include "sort.h"
#include <stdlib.h>

static int compare_ints(const void *left, const void *right)
{
    int a = *(const int *)left;
    int b = *(const int *)right;
    return (a > b) - (a < b);
}


void sort_values(int values[], int count)
{
    qsort(values, count, sizeof(*values), compare_ints);
}
