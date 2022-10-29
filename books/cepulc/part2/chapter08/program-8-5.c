#include <stdio.h>


int
troca(int* x, int* y) {
    static int trocas = 0;
    int aux = *x;
    *x = *y;
    *y = aux;
    return ++trocas;
}

int
main(void) {
    int x = 123, y = 321;

    printf("Troca %d: ", troca(&x, &y));
    printf("x: %d y: %d\n", x, y);
    printf("Troca %d: ", troca(&x, &y));
    printf("x: %d y: %d\n", x, y);
    printf("Troca %d: ", troca(&x, &y));
    printf("x: %d y: %d\n", x, y);
    return 0;
}
