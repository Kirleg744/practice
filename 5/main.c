#include <stdio.h>

int main() {
    int tableRows;
    float value, valueChange, strike, litres, stopok;

    printf("Введіть кількість рядків таблиці, початкове значення та шаг змінення\n");
    scanf("%i %f %f", tableRows, value, valueChange);

    printf("╔══════════════════════════╦═════════════════════════╦═════════════════════════╗\n");
    for (int i = 0; i < tableRows; i++, value += valueChange) {
        strike = value, litres = value * 72.73, stopok = value * 1280.46;

        printf("║%16f страйків ║%17f літрів ║%17f стопок ║\n", strike, litres, stopok);
    }
    printf("╚══════════════════════════╩═════════════════════════╩═════════════════════════╝\n");

    return 0;
}