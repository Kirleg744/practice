#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../lib.h"

int main() {
    float a = 1, summa = 0, x;
    int step;
    printf("Введіть x (0;1)\n");
    scanf("%f", x);

    while (x < 0 || x > 1) {
        printf("x не у інтервалі (0;1)\n");
        scanf("%f", x);
    }

    for (int k = 1; a > 0.001; k++) {
        a = pow(-1, k) * ((function17variant(k) * pow(x, k)) / factorial(k));
        printf("%f\n", a);
        summa += a;
        step = k;
    }
    printf("Сумма цієї послідовності: %f\nШагів для досягнення точності 0.001: %i\n", summa, step);
    return 0;
}