#include <cstdlib>
#include "randfuncs.h"

int flipCoin() {
    return rand() % 2;   // 0 = Heads, 1 = Tails
}

int rollSixSidedDie() {
    return rand() % 6 + 1;
}

int rollTenSidedDie() {
    return rand() % 10 + 1;
}
