#include <stdio.h>

#include "long_num.h"

int main()
{
    int n;
    scanf("%d", &n);

    LongNum first = makeLongNum(0);
    LongNum second = makeLongNum(1);

    for (int i = 0; i < n; i++)
    {
        LongNum next = sumLongNum(&first, &second);
        first = second;
        second = next;
    }
    printLong(&first);
    return 0;
}