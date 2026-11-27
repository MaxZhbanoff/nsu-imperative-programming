#include "set_difference.h"
#include <stdlib.h>

static int compare_ints(const void *left, const void *right)
{
    int a = *(const int *)left;
    int b = *(const int *)right;
    return (a > b) - (a < b);
}


int set_difference(int a[], int n, int b[], int k)
{
    qsort(a, n, sizeof(*a), compare_ints);
    qsort(b, k, sizeof(*b), compare_ints);

    int count = 0;
    int j = 0;
    for (int i = 0; i < n;) {
        int value = a[i++];
        while (i < n && a[i] == value)
            i++;
        while (j < k && b[j] < value)
            j++;
        if (j == k || b[j] != value)
            a[count++] = value;
    }
    return count;
}
