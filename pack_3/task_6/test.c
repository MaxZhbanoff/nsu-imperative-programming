#include <assert.h>
#include <stdio.h>

#include "read_time.h"

static void test_valid_times(void)
{
    char full[] = "23:59:59";
    char short_time[] = "7:9";
    int h, m, s;
    assert(readTime(full, &h, &m, &s));
    assert(h == 23 && m == 59 && s == 59);
    assert(readTime(short_time, &h, &m, &s));
    assert(h == 7 && m == 9 && s == 0);
}

static void test_optional_outputs(void)
{
    char time[] = "15:01:13";
    int h, m;
    assert(readTime(time, &h, &m, NULL));
    assert(h == 15 && m == 1);
    assert(readTime(time, &h, NULL, NULL));
    assert(h == 15);
}

static void test_invalid_times(void)
{
    char bad_seconds[] = "7:1:60";
    char bad_format[] = "1|3|:|5";
    int h, m, s;
    assert(!readTime(bad_seconds, &h, &m, &s));
    assert(h == -1 && m == -1 && s == -1);
    assert(!readTime(bad_format, &h, NULL, NULL));
    assert(h == -1);
}

int main(void)
{
    test_valid_times();
    test_optional_outputs();
    test_invalid_times();

    puts("All tests passed successfully");
    return 0;
}
