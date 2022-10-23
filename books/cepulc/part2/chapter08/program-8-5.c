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

    /* This is buggy, as it depends on execution stack.
     * This is typical of amateurs, who don't understand the impact of side
     * effects
     * The example doesn't match tcc output in gcc with my setup
     */
    printf("Troca %d: x: %d y: %d\n", troca(&x, &y), x, y);
    printf("Troca %d: x: %d y: %d\n", troca(&x, &y), x, y);
    printf("Troca %d: x: %d y: %d\n", troca(&x, &y), x, y);

    return 0;
}
