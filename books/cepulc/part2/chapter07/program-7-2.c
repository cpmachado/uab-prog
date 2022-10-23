#include <stdio.h>


int
main(void) {
    int dias_da_semana[7];
    int total = 0, i;

    printf("Segunda: ");
    scanf(" %d", &dias_da_semana[0]);
    printf("Terca: ");
    scanf(" %d", &dias_da_semana[1]);
    printf("Quarta: ");
    scanf(" %d", &dias_da_semana[2]);
    printf("Quinta: ");
    scanf(" %d", &dias_da_semana[3]);
    printf("Sexta: ");
    scanf(" %d", &dias_da_semana[4]);
    printf("Sabado: ");
    scanf(" %d", &dias_da_semana[5]);
    printf("Domingo: ");
    scanf(" %d", &dias_da_semana[6]);

    for (i = 0; i < 7; i++) {
        total += dias_da_semana[i];
    }
    printf("Soma: %d\n", total);
    printf("Media: %f\n", total/7.0);

    return 0;
}

