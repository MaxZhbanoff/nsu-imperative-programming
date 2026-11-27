#include "word_count.h"

int count_words(const char *text)
{
    int count = 0;
    int in_word = 0;
    for (; *text && *text != '\n' && *text != '\r'; text++) {
        if (*text == '.') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
    }
    return count;
}
