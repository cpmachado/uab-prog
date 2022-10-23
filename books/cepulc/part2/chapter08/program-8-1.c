#include <stdio.h>


/* doesn't swap, as the values are passed by value */
void
troca(int x, int y) {
    int aux = x;
    x = y;
    y = aux;
}

int
main(void) {
    int x = 123, y = 321;

    troca(x, y);
    printf("x: %d y: %d\n", x, y);

    return 0;
}
