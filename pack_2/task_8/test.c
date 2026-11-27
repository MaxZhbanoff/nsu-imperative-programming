#include <assert.h>
#include <stdio.h>

#include "word_count.h"

static void test_repeated_delimiters(void)
{
    assert(count_words("..ko..Privet.kreved....ko...") == 4);
}

static void test_empty_and_single_word(void)
{
    assert(count_words("...") == 0);
    assert(count_words("Hello") == 1);
}

int main(void)
{
    test_repeated_delimiters();
    test_empty_and_single_word();

    puts("All tests passed successfully");
    return 0;
}
