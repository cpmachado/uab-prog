#include <stdio.h>

int
main(void) {
    int soma = 0, i;

    for (i = 1; i <= 4; i++) {
        soma += i * i;
    }

    printf("Soma dos primeiros 4 quadrados: %d\n", soma);

    return 0;
}
