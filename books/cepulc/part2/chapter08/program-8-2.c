#include <stdio.h>


void
troca(int x[], int y[]) {
    int aux = x[0];
    x[0] = y[0];
    y[0] = aux;
}

int
main(void) {
    int x[1] = { 123 }, y[1] = { 321 };

    troca(x, y);
    printf("x: %d y: %d\n", x[0], y[0]);

    return 0;
}
