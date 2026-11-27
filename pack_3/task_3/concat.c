#include "concat.h"

#include <string.h>

char *concat(char *pref, char *suff)
{
    char *tail = pref + strlen(pref);
    size_t length = strlen(suff);
    memcpy(tail, suff, length + 1);
    return tail + length;
}
