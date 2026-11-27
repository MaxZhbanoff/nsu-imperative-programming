#include <assert.h>
#include <stdio.h>

#include "relation.h"

static void test_bijection(void)
{
    const int images[] = {0, 2, 1};
    const int preimages[] = {0, 1, 1};
    RelationProperties result = classify_relation(images, preimages, 2);
    assert(result.everywhere && result.injective && result.surjective);
}

static void test_partial_relation(void)
{
    const int images[] = {0, 1, 1, 0};
    const int preimages[] = {0, 2, 0, 0};
    RelationProperties result = classify_relation(images, preimages, 3);
    assert(!result.everywhere && !result.injective && !result.surjective);
}

int main(void)
{
    test_bijection();
    test_partial_relation();

    puts("All tests passed successfully");
    return 0;
}
