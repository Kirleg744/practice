#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../lib.h"

int main() {
    char choice;
    float y, taxes, i = 10;
    printf("Введіть тип виконаної роботи (A, B, C)\n");
    scanf("%c", choice);
    if (choice == 'A') {
        y = 100 * fabs(function12variant(i) + 50);
        taxes = y * 0.1;
    }
    else if (choice == 'B') {
        y = 150 * fabs(function13variant(i) + 100);
        taxes = y * 0.15;
    }
    else if (choice == 'C') {
        y = 200 * fabs(function14variant(i) + 135);
        taxes = y * 0.2;
    }
    printf("Зарахавано: %f\n", y);
    printf("Податки: %f\n", taxes);
    printf("До видачі: %f\n", y - taxes);
    return 0;
}