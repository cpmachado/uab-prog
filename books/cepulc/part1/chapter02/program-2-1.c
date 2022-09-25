#include <stdio.h>

int
main(void) {
    /* variable declaration */
    int x = 3, y = 7, aux;

    /* print the variables */
    printf("x: %d, y: %d\n", x, y);

    /* swap the variables */
    aux = x;
    x = y;
    y = aux;

    /* print the variables */
    printf("x: %d, y: %d\n", x, y);

    return 0;
}
