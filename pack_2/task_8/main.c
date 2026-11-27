#include <stdio.h>

#include "word_count.h"

int main(void)
{
    char text[10002];
    if (fgets(text, sizeof(text), stdin) == NULL)
        return 1;

    printf("%d\n", count_words(text));
    return 0;
}
