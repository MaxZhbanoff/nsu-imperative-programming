#include <ctype.h>
#include <stdio.h>

#include "words.h"

int main(void)
{
    static char s[1000001];
    if (scanf("%1000000s", s) != 1)
        return 1;
    char *cur = s;
    while (*cur)
    {
        int start, end;
        if (!extract(cur, &start, &end, ".,;:"))
        {
            break;
        }
        int uppercase = 0;
        for (int i = start; i < end; i++)
        {
            if (isupper((unsigned char)cur[i]))
                uppercase++;
        }
        printf("%d/%d %.*s\n", uppercase, end - start, end - start, cur + start);
        cur = cur + end;
    }
    return 0;
}
