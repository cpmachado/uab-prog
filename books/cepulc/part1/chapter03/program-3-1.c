#include <stdio.h>

int
main(void) {
    int numero;

    printf("Indique um numero: ");
    scanf(" %d", &numero);

    if (numero % 2 == 0) {
        printf("par\n");
    } else {
        printf("impar\n");
    }
    return 0;
}
