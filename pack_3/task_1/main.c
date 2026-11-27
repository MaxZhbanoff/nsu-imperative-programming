#include <stdio.h>

#include "print_time.h"

int main(void)
{
    if (freopen("input.txt", "r", stdin) == NULL ||
        freopen("output.txt", "w", stdout) == NULL)
        return 1;

    int n;
    if (scanf("%d", &n) != 1)
        return 1;

    for (int i = 0; i < n; i++) {
        int h, m, s;
        char buf[9];
        if (scanf("%d %d %d", &h, &m, &s) != 3)
            return 1;

        printTime(buf, h, m, s);
        puts(buf);
    }
    return 0;
}
