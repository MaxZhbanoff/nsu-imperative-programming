#ifndef RELATION_H
#define RELATION_H

typedef struct {
    int everywhere, injective, surjective;
} RelationProperties;

RelationProperties classify_relation(const int images[], const int preimages[], int count);

#endif
