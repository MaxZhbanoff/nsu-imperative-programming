#include <stdio.h>
#include <stdlib.h>

#include "concat.h"

int main(void)
{
    int count;
    if (scanf("%d", &count) != 1 || count < 2 || count > 100000)
        return 1;

    char *text = malloc((size_t)count * 100 + 1);
    if (text == NULL)
        return 1;

    char *tail = text;
    *tail = '\0';
    for (int i = 0; i < count; i++) {
        char word[101];
        if (scanf("%100s", word) != 1) {
            free(text);
            return 1;
        }
        tail = concat(tail, word);
    }

    puts(text);
    free(text);
    return 0;
}
