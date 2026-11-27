#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "histogram.h"

static void test_ordered_counts(void)
{
    int values[] = {5, 0, -1, 5, 0};
    FILE *out = tmpfile();
    assert(out != NULL);

    write_histogram(values, 5, out);
    rewind(out);

    char result[64] = {0};
    size_t length = fread(result, 1, sizeof(result) - 1, out);
    assert(length == strlen("-1: 1\n0: 2\n5: 2\n"));
    assert(strcmp(result, "-1: 1\n0: 2\n5: 2\n") == 0);
    fclose(out);
}

int main(void)
{
    test_ordered_counts();

    puts("All tests passed successfully");
    return 0;
}
