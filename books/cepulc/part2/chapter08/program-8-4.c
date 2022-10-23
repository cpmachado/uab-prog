#include <stdio.h>

int x = 123, y = 321;


void
troca(void) {
    int aux = x;
    x = y;
    y = aux;
}

int
main(void) {
    troca();
    printf("x: %d y: %d\n", x, y);

    return 0;
}
