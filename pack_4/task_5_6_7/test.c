#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "long_num.h"

static void test_fibonacci(void)
{
    const long long expected[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55,
                                  89, 144, 233, 377, 610, 987, 1597, 2584, 4181};
    LongNum first = makeLongNum(0);
    LongNum second = makeLongNum(1);

    for (size_t i = 0; i < sizeof(expected) / sizeof(expected[0]); i++) {
        assert(getValue(&second) == expected[i]);
        LongNum next = sumLongNum(&first, &second);
        first = second;
        second = next;
    }
}

static void test_factorial(void)
{
    const long long expected[] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    LongNum result = makeLongNum(1);

    for (size_t i = 0; i < sizeof(expected) / sizeof(expected[0]); i++) {
        result = multiLongIntNum(&result, (int)i + 1);
        assert(getValue(&result) == expected[i]);
    }
}

static void test_multiplication(void)
{
    LongNum first = makeLongNum(12345);
    LongNum second = makeLongNum(67890);
    LongNum result = multiLongLongNum(&first, &second);
    assert(getValue(&result) == 838102050LL);

    LongNum zero = makeLongNum(0);
    result = multiLongLongNum(&first, &zero);
    assert(result.len == 1 && result.arr[0] == 0);
}

int main(int argc, char *argv[])
{
    if (argc > 2 || (argc == 2 && strcmp(argv[1], "5") != 0 &&
                     strcmp(argv[1], "6") != 0 && strcmp(argv[1], "7") != 0))
        return 1;

    if (argc == 1 || strcmp(argv[1], "5") == 0)
        test_fibonacci();
    if (argc == 1 || strcmp(argv[1], "6") == 0)
        test_factorial();
    if (argc == 1 || strcmp(argv[1], "7") == 0)
        test_multiplication();

    puts("All tests passed successfully");
    return 0;
}
