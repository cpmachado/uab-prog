#include <stdio.h>

int
main(void) {
    int ano;

    printf("Indique o ano: ");
    scanf(" %d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("Bissexto\n");
    } else {
        printf("Normal\n");
    }

    return 0;
}
