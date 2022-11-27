#include <stdio.h>

int main() {
    char literal;
    printf("Введіть першу літеру назви міста (A B C D)\n");
    scanf("%c", literal);
    if (literal == 'A') {
        printf("25000\n");
    }
    else if (literal == 'B') {
        printf("35000\n");
    }
    else if (literal == 'C') {
        printf("45000\n");
    }
    else if (literal == 'D') {
        printf("55000\n");
    }
    else {
        printf("Такої міста немає в списку\n");
    }
    return 0;
}