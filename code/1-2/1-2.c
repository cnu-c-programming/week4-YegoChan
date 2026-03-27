#include <stdio.h>

#include "util.h"

int main() {
    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0) {
            logger("even");
        } else {
            logger("odd");
        }
    }
    return 0;
}
