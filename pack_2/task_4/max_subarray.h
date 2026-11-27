#ifndef MAX_SUBARRAY_H
#define MAX_SUBARRAY_H

typedef struct {
    int left, right;
    long long sum;
} Subarray;

Subarray max_subarray(const int values[], int count);

#endif
