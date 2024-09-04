#include <stdio.h>

int main() {
    int NUMBER;
    int a = 0, b = 1, next;

    printf("Informe um n%cmero: ", 163);
    scanf("%d", &NUMBER);

    if (NUMBER == 0 || NUMBER == 1) {
        printf("O n%cmero %d pertence %c sequ%cncia de Fibonacci.\n", 163, NUMBER, 133, 138);
        return 0;
    }

    next = a + b;

    while (next <= NUMBER) {
        if (next == NUMBER) {
            printf("O n%cmero %d pertence %c sequ%cncia de Fibonacci.\n", 163, NUMBER, 133, 138);
            return 0;
        }
        a = b;
        b = next;
        next = a + b;
    }

    printf("O n%cmero %d n%co pertence %c sequ%cncia de Fibonacci.\n", 163, NUMBER, 198, 133, 138);
    return 0;
}
