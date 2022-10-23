#include <stdio.h>

int
bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0;
}

int
main(void) {
    int ano;

    printf("Indique o ano: ");
    scanf(" %d", &ano);

    if (bissexto(ano)) {
        printf("Bissexto\n");
    } else {
        printf("Normal\n");
    }

    return 0;
}
