#include <stdio.h>

int main() {
    char literal;
    printf("Введіть першу літеру назви міста (A B C D)\n");
    scanf("%c", literal);
    switch (literal) {
        case 'A':
            printf("25000\n");
            break;
        case 'B':
            printf("35000\n");
            break;
        case 'C':
            printf("45000\n");
            break;
        case 'D':
            printf("55000\n");
            break;
        default:
            printf("Такої міста немає в списку\n");
            break;
    }
    return 0;
}