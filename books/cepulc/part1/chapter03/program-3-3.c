#include <stdio.h>

int
main(void) {
    int ano, mes;

    printf("Indique o ano: ");
    scanf(" %d", &ano);

    printf("Indique o mes: ");
    scanf(" %d", &mes);

    if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            printf("29\n");
        } else {
            printf("28\n");
        }
    } else if (mes == 1 || mes == 3 || mes == 5 || mes == 7
            || mes == 8 || mes == 10 || mes == 12) {
        printf("31\n");
    } else if (mes > 0 && mes < 13) {
        printf("30\n");
    } else {
        printf("Erro\n");
    }

    return 0;
}
