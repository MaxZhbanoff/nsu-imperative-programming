#include <stdio.h>

#include "convert.h"

int main(void)
{
    int p, q;
    if (scanf("%d %d ", &p, &q) != 2)
        return 1;

    convert(p, q, stdin, stdout);
    return 0;
}
