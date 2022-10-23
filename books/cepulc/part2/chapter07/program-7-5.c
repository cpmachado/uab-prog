#include <stdio.h>

int
bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0;
}

int
dias_do_mes(int mes, int ano) {
    int dias_do_mes[] = {
        31,
        28,
        31,
        30,
        31,
        30,
        /* ^- Janeiro - Junho */
        31,
        31,
        30,
        31,
        30,
        31
        /* ^- Julho - Dezembro */
    };

    if (mes == 2 && bissexto(ano)) {
        return 29;
    }

    return dias_do_mes[mes - 1];
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
