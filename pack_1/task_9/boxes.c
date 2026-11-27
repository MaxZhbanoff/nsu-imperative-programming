#include "boxes.h"

long long count_boxes(int volume)
{
    long long count = 0;
    for (int a = 1; (long long)a * a * a <= volume; a++) {
        for (int b = a; (long long)a * b * b <= volume; b++)
            count += volume / (a * b) - b + 1;
    }
    return count;
}
