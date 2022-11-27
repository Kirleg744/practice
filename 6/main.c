#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../lib.h"

int main() {
    float x = 0, z;
    long y = 1;

    for (int k = 1; k <= 15; k++) {
        x += function15variant(k);
    }

    for (int k = 1; k <= 15; k++) {
        y *= function16variant(k);
    }

    z = abs(12 * x - cos(y));

    printf("x = %f\ny = %li\nz = %f", x, y, z);

    return 0;
}