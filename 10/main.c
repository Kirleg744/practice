#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../lib.h"

int main() {
    float y[7], max = -100;
    int index = 0, temp, maxIndex, nullIndexes[8];
    for (int k = 1; k <= 7; k++) {
        y[k] = function20variant(k);
        printf("%f\n", y[k]);
        if (y[k] > max) {
            max = y[k];
            maxIndex = k;
        }
    }

    for (int i = 0; i < sizeof(y) / sizeof(float); i++) {
        if (y[i] == 0) {
            nullIndexes[index] = i;
            index++;
        }
    }
    if (nullIndexes[1] != 0) {
        temp = y[maxIndex];
        y[maxIndex] = y[nullIndexes[1]];
        y[nullIndexes[1]] = temp;
        printf("Максимальний елемент поміняний місцями з другим нульовим");
    }
    else {
        printf("Другого нульового елемента не існує");
    }

    return 0;
}