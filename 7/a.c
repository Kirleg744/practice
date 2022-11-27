#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../lib.h"

int main() {
    float a = 1, summa = 0;
    for (int k = 1; a > 0.001; k++) {
        a = function17variant(k) / k;
        summa += a;
    }
    printf("%f  %f", summa, a);
    return 0;
}