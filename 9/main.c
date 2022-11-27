#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../lib.h"

int main() {
    float y, sumPlus = 0, sumMinus = 0;
    int yearsPlus = 0;

    for (int k = 1991; k <= 2001; k++) {
        y = 100 * function19variant(k);
        printf("%f\n", y);
        if (y < 0) {
            sumMinus += abs(y);
        }
        else if (y > 0) {
            sumPlus += y;
            yearsPlus++;
        }
    }
    printf("Сума прибутків: %f\nСума збитків: %f\nРоків фірма мала прибуток: %i\n", sumPlus, sumMinus, yearsPlus);

    return 0;
}