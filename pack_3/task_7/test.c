#include <assert.h>
#include <stdio.h>

#include "histogram.h"

static void test_multiline_printable_characters(void)
{
    FILE *input = tmpfile();
    assert(input != NULL);
    fputs("A A\n!a~\n", input);
    rewind(input);

    size_t counts[ASCII_LAST_PRINTABLE + 1] = {0};
    count_characters(input, counts);
    assert(counts['A'] == 2 && counts['a'] == 1);
    assert(counts[' '] == 1 && counts['!'] == 1 && counts['~'] == 1);
    assert(counts['\n'] == 0 && counts['B'] == 0);
    fclose(input);
}

int main(void)
{
    test_multiline_printable_characters();

    puts("All tests passed successfully");
    return 0;
}
