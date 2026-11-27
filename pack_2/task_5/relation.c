#include "relation.h"

RelationProperties classify_relation(const int images[], const int preimages[], int count)
{
    RelationProperties result = {1, 1, 1};
    for (int i = 1; i <= count; i++) {
        if (images[i] == 0)
            result.everywhere = 0;
        if (preimages[i] > 1)
            result.injective = 0;
        if (preimages[i] == 0)
            result.surjective = 0;
    }
    return result;
}
