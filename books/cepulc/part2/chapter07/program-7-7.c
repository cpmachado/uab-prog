#include <stdio.h>


int
main(void) {
    int dias_da_semana[7];
    int total = 0, i;
    /* First member is the only optional, not the second */
    char prompt[7][10] = {
        "Segunda: ",
        "Terca: ",
        "Quarta: ",
        "Quinta: ",
        "Sexta: ",
        "Sabado: ",
        "Domingo: "
    };

    for (i = 0; i < 7; i++) {
        /* var string should be used as literal */
        printf("%s", prompt[i]);
        scanf(" %d", &dias_da_semana[i]);
    }

    for (i = 0; i < 7; i++) {
        total += dias_da_semana[i];
    }
    printf("Soma: %d\n", total);
    printf("Media: %f\n", total/7.0);

    return 0;
}

