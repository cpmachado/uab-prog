#include <stdio.h>

int
bissexto(int ano) {
    return (!(ano % 4) && ano % 100) || !(ano % 400);
}

int
dias_do_mes(int mes, int ano) {
    if (mes == 2) {
        if (bissexto(ano)) {
            return 29;
        }
        return 28;
    }
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
        mes == 8 || mes == 10 || mes == 12) {
        return 31;
    }
    return 30;
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
