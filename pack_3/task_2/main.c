#include <stdio.h>

#include "reverse.h"

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
        return 1;

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }

    for (int i = 0; i < n; i++) {
        char text[102];
        int len = 0;
        while ((c = getchar()) != '\n' && c != EOF) {
            if (len == (int)sizeof(text) - 1)
                return 1;
            text[len++] = (char)c;
        }
        if (len > 0 && text[len - 1] == '\r')
            len--;
        if (len > 100)
            return 1;

        text[len] = '\0';
        reverse(text, len);
        puts(text);
    }
    return 0;
}
