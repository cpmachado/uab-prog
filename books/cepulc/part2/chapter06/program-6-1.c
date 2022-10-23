#include <stdio.h>

int
main(void) {
    int soma = 0, i = 1;

    while (i <= 4) {
        soma += i * i;
        i++;
    }

    printf("Soma dos primeiros 4 quadrados: %d\n", soma);

    return 0;
}
