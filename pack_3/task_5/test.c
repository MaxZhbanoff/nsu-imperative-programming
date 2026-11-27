#include <assert.h>
#include <stdio.h>

#include "words.h"

static void test_first_and_final_word(void)
{
    int start, end;
    assert(extract("..ko,Privet", &start, &end, ".,;:"));
    assert(start == 2 && end == 4);
    assert(extract(",Privet", &start, &end, ".,;:"));
    assert(start == 1 && end == 7);
}

static void test_only_delimiters(void)
{
    int start, end;
    assert(!extract(".,;:", &start, &end, ".,;:"));
}

int main(void)
{
    test_first_and_final_word();
    test_only_delimiters();

    puts("All tests passed successfully");
    return 0;
}
