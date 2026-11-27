#include "permutation.h"

static void swap(char *a, char *b)
{
    char value = *a;
    *a = *b;
    *b = value;
}

void next_permutation(char letters[], int count)
{
    int pivot = count - 2;
    while (pivot >= 0 && letters[pivot] >= letters[pivot + 1])
        pivot--;
    if (pivot < 0)
        return;

    int successor = count - 1;
    while (letters[successor] <= letters[pivot])
        successor--;

    swap(&letters[pivot], &letters[successor]);
    for (int left = pivot + 1, right = count - 1; left < right; left++, right--)
        swap(&letters[left], &letters[right]);
}
