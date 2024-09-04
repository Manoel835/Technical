#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;
    char temp;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }


    printf("String invertida: %s\n", str);

    return 0;
}
