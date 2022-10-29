#include <stdio.h>


void
hanoi(int de, int para, int medio, int discos) {
    static char pilhas[3][9] = {
        "esquerda",
        "meio",
        "direita"
    };

    if (discos == 1) {
        printf("Mover disco do(a) %s para %s\n", pilhas[de], pilhas[para]);
    }
    if (discos > 1) {
        hanoi(de, medio, para, discos - 1);
        hanoi(de, para, medio, 1);
        hanoi(medio, para, de, discos - 1);
    }
}

int
main(void) {
    int discos;

    printf("Torres de Hanoi. Quantos discos quer movimentar? ");
    scanf(" %d", &discos);
    hanoi(0, 2, 1, discos);
    return 0;
}
