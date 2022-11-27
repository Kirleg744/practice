#include <stdio.h>
#include <math.h>

int main() {
    int speed = 299792;

    printf("Відстань за годину: %i\n", speed * 60 * 60);
    printf("Відстань за добу: %i\n", speed * 60 * 60 * 24);

    return 0;
}