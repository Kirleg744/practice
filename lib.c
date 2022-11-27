#include "./lib.h"
#include <math.h>
#include <stdlib.h>

float distance(int aX, int aY, int bX, int bY) {
    float distance = sqrt(pow((bX - aX), 2) + pow((bY - aY), 2));
    return distance;
}

float function12variant(float x) {
    float f = cos(pow(x , 3)) / 2.1 + cos(pow(x, 2)) / 1.1 - 8.3 * sin(3 * x + 1);
    return f;
}

float function13variant(float x) {
    float f = sin(pow(x, 2)) * cos(pow(x , 3)) - sin(x) + 5.2;
    return f;
}

float function14variant(float x) {
    float f = 2 * sin(x) * sin(2 * x - 1.5) * cos(2 * x + 1.5) - 6;
    return f;
}

float function15variant(float x) {
    float f = fabs(cos(pow(x, 2)) - 0.51) * sin(3 * x - 4) - 4.44;
    return f;
}

float function16variant(float x) {
    float f = cos(2.1 * x) * sin(fabs(x)) / 0.15 - 5.8;
    return f;
}

float function17variant(float x) {
    float f = fabs(cos(2 * pow(x, 2)) + 2 * sin(2 * x / 1.2)) + 10.51 * cos(fabs(3 * x));
    return f;
}

float factorial(float x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

float function18variant (float x) {
    float f = fabs(sin(pow(x, 2) / 1.5 - 2)) + 11.73 * cos(1.6 * x - 1);
    return f;
}

float function19variant (float x) {
    float f = 13.4 * cos(fabs(x)) * sin(pow(x, 2) - 2.25);
    return f;
}

float function20variant (float x) {
    float f = fabs(cos(pow(x, 2) - 3.8)) / 4.5 - 9.7 * sin(x - 3.1);
    return f;
}