#include <stdio.h>

#include "permutation.h"

int main(void)
{
    int n;
    char letters[26];
    if (scanf("%d", &n) != 1 || n < 1 || n > 26)
        return 1;

    for (int i = 0; i < n; i++) {
        if (scanf(" %c", &letters[i]) != 1)
            return 1;
    }

    next_permutation(letters, n);
    for (int i = 0; i < n; i++)
        printf("%c ", letters[i]);
    putchar('\n');
    return 0;
}
