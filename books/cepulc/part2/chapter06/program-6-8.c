#include <stdio.h>

int
bissexto(int ano) {
    return (!(ano % 4) && ano % 100) || !(ano % 400);
}

int
dias_do_mes(int mes, int ano) {
    switch (mes) {
        case 2:
            if (bissexto(ano)) {
                return 29;
            }
            return 28;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        default:
            return 30;
    }
}

int
main(void) {
    int ano, mes, dias;

    printf("Indique o ano: ");
    scanf(" %d", &ano);
    printf("Indique o mes: ");
    scanf(" %d", &mes);

    dias = dias_do_mes(mes, ano);
    printf("%d\n", dias);

    return 0;
}
