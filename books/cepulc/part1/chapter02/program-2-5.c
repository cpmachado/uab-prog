#include <stdio.h>

int
main(void) {
    char c;
    int x;
    double d;

    printf("Introduza um caracter: ");
    scanf(" %c", &c);

    printf("Introduza um inteiro: ");
    scanf(" %d", &x);

    printf("Introduza um real: ");
    scanf(" %lf", &d);

    printf("Valores introduzidos: %c %d %lf\n", c, x, d);

    return 0;
}
