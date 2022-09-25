#include <stdio.h>

int
main(void) {
    /* variable declaration */
    int x = 3, y = 7;

    /* print the variables */
    printf("x: %d, y: %d\n", x, y);

    /* swap the variables */
    x = x + y;
    y = x - y;
    x = x - y;

    /* print the variables */
    printf("x: %d, y: %d\n", x, y);

    return 0;
}
