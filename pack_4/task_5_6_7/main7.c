#include "long_num.h"

int main() {
    LongNum first  = readLongNum();
    LongNum second = readLongNum();

    LongNum res = multiLongLongNum(&first, &second);

    printLong(&res);

    return 0;
}