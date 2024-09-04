#include <stdio.h>

int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    for ( K = 1; K <= INDICE; K++ ) {
        SOMA = SOMA + K;
    }

    printf("SOMA = %d\n", SOMA);

    return 0;

}