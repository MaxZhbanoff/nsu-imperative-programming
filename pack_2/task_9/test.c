#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "convert.h"

static void assert_conversion(int from, int to, const char *number, const char *expected)
{
    FILE *input = tmpfile();
    FILE *output = tmpfile();
    assert(input != NULL && output != NULL);
    fputs(number, input);
    rewind(input);

    convert(from, to, input, output);
    rewind(output);

    char result[64] = {0};
    size_t length = fread(result, 1, sizeof(result) - 1, output);
    assert(length == strlen(expected));
    assert(strcmp(result, expected) == 0);

    fclose(input);
    fclose(output);
}

static void test_common_bases(void)
{
    assert_conversion(10, 2, "12", "1100");
    assert_conversion(10, 16, "255", "ff");
    assert_conversion(16, 10, "ff", "255");
    assert_conversion(2, 16, "101010", "2a");
}

static void test_other_bases_and_zero(void)
{
    assert_conversion(62, 10, "Z", "61");
    assert_conversion(10, 8, "0", "0");
    assert_conversion(3, 5, "210", "41");
    assert_conversion(7, 20, "22", "g");
    assert_conversion(50, 7, "G", "60");
}

int main(void)
{
    test_common_bases();
    test_other_bases_and_zero();

    puts("All tests passed successfully");
    return 0;
}
