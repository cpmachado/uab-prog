#include <stdio.h>

int
main(void) {
    int soma, i;

    for (i = 1, soma = 0; i <= 4; i++) {
        soma += i * i;
    }

    printf("Soma dos primeiros 4 quadrados: %d\n", soma);

    return 0;
}
