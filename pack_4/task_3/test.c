#include <assert.h>
#include <stdio.h>

#include "stats.h"

static void test_age_and_name_boundaries(void)
{
    const Label people[] = {
        {"TenLetters", 13}, {"ElevenChars", 14}, {"Adult", 18}, {"Young", 17}
    };
    NameStats names;
    AgeStats ages;
    calcStats(people, 4, &names, &ages);
    assert(names.cntTotal == 4 && names.cntLong == 1);
    assert(ages.cntTotal == 4 && ages.cntAdults == 1 && ages.cntKids == 1);
}

static void test_empty_list(void)
{
    NameStats names;
    AgeStats ages;
    calcStats(NULL, 0, &names, &ages);
    assert(names.cntTotal == 0 && names.cntLong == 0);
    assert(ages.cntTotal == 0 && ages.cntAdults == 0 && ages.cntKids == 0);
}

int main(void)
{
    test_age_and_name_boundaries();
    test_empty_list();

    puts("All tests passed successfully");
    return 0;
}
