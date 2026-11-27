#include <stdio.h>

#include "boxes.h"

int main(void)
{
    int volume;
    if (scanf("%d", &volume) != 1)
        return 1;

    printf("%lld\n", count_boxes(volume));
    return 0;
}
