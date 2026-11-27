#include <stdio.h>
#include <stdlib.h>

#include "relation.h"

int main(void)
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2 || n < 0 || m < 0)
        return 1;

    int *images = calloc((size_t)n + 1, sizeof(*images));
    int *preimages = calloc((size_t)n + 1, sizeof(*preimages));
    if (images == NULL || preimages == NULL) {
        free(images);
        free(preimages);
        return 1;
    }

    int is_function = 1;
    for (int i = 0; i < m; i++) {
        int x, y;
        if (scanf("%d %d", &x, &y) != 2 || x < 1 || x > n || y < 1 || y > n) {
            free(images);
            free(preimages);
            return 1;
        }
        if (images[x] == 0) {
            images[x] = y;
            preimages[y]++;
        } else if (images[x] != y) {
            is_function = 0;
            break;
        }
    }

    if (is_function) {
        RelationProperties properties = classify_relation(images, preimages, n);
        printf("1");
        if (properties.everywhere)
            printf(" 2");
        if (properties.injective)
            printf(" 3");
        if (properties.surjective)
            printf(" 4");
        if (properties.injective && properties.surjective)
            printf(" 5");
        putchar('\n');
    } else {
        puts("0");
    }

    free(images);
    free(preimages);
    return 0;
}
