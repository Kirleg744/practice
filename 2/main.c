#include <stdio.h>
#include <math.h>
#include "../lib.h"

int main() {
    int a[2] = {0, 0},
        b[2] = {24, 23},
        c[2] = {-24, 25};

    float halfPerimeter = (distance(a[0], a[1], b[0], b[1]) + distance(b[0], b[1], c[0], c[1]) + distance(c[0], c[1], a[0], a[1])) / 2;
    float mediane = 0.5 * sqrt(2 * pow(distance(a[0], a[1], b[0], b[1]), 2) + 2 * pow(distance(b[0], b[1], c[0], c[1]), 2) - distance(c[0], c[1], a[0], a[1]) * distance(c[0], c[1], a[0], a[1]));
    float bisector = sqrt(distance(c[0], c[1], a[0], a[1]) * distance(a[0], a[1], b[0], b[1]) * halfPerimeter * (halfPerimeter - distance(b[0], b[1], c[0], c[1]))) / (distance(c[0], c[1], a[0], a[1]) + distance(a[0], a[1], b[0], b[1]));

    printf("Медіана трикутника %f\n", mediane);
    printf("Бісектриса трикутника %f\n", bisector);
    return 0;
}