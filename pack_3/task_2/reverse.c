#include "reverse.h"

void reverse(char *start, int len)
{
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char value = start[i];
        start[i] = start[j];
        start[j] = value;
    }
}
