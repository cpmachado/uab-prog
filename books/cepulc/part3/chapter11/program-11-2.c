#include <stdio.h>


struct SData {
    int ano, mes, dia;
};


int
bissexto(int ano) {
    return (!(ano % 4) && ano % 100) || !(ano % 400);
}

int
dias_do_mes(struct SData data) {
    if (data.mes == 2) {
        if (bissexto(data.ano)) {
            return 29;
        }
        return 28;
    }
    if (data.mes == 1 || data.mes == 3 || data.mes == 5 || data.mes == 7 ||
        data.mes == 8 || data.mes == 10 || data.mes == 12) {
        return 31;
    }
    return 30;
}


int
main(void) {
    struct SData data;
    int dias;

    printf("Indique o ano: ");
    scanf(" %d", &data.ano);
    printf("Indique o mes: ");
    scanf(" %d", &data.mes);

    dias = dias_do_mes(data);
    printf("%d\n", dias);

    return 0;
}
