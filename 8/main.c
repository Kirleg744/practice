#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../lib.h"


int main() {
    int i = 10;
    float h = 0.1 * i, sum, min = 100;

    printf("╔════════════╦════════════╗\n");

    for (float arg = 0; arg < i; arg += h) {

        printf("║ %10i ║ %10f ║\n", (int)arg, function18variant(arg));

        if (function18variant(arg) > 0) {
            sum += pow(function18variant(arg), 2);
        }
        if (function18variant(arg) < min) {
            min = function18variant(arg);
        }
    }

    printf("╠════════════╩════════════╣\n");
    printf("║ Мінімальне %12f ║\n", min);
    printf("║ Сума %18f ║\n", sum);
    printf("╚═════════════════════════╝\n");

    return 0;
}