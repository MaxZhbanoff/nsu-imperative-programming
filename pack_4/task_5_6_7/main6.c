#include <stdio.h>

#include "long_num.h"

int main()
{
    int n;
    scanf("%d", &n);
    LongNum first = makeLongNum(1);
    for (int i = 1; i <= n; i++)
    {
        first = multiLongIntNum(&first, i);
    }
    printLong(&first);
    return 0;
}
