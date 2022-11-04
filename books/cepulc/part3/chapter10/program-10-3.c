#include <math.h>
#include <stdio.h>
#include <stdlib.h>


void
media(int n) {
    float *valor;
    float media = 0, variancia = 0;
    int i;

    if (!(valor = (float*)malloc(sizeof(float)*n))) {
        printf("Memoria insuficiente para aloca %d elementos.\n", n);
        return;
    }

    for (i = 0; i < n; i++) {
        printf("Valor %d: ", i);
        scanf(" %f", &valor[i]);
    }

    for (i = 0; i < n; i++) {
        media += valor[i];
    }

    media /= n;

    for (i = 0; i < n; i++) {
        variancia += (media - valor[i]) * (media - valor[i]);
    }

    variancia /= n;

    printf("Media: %g\n", media);
    printf("Desvio padrao: %g\n", sqrt(variancia));

    free(valor);
}

int
main(void) {
    int n;

    printf("Quantos valores tem o vector: ");
    scanf(" %d", &n);

    if (n <= 0) {
        printf("Valor tem de ser superior a 0\n");
        return 1;
    }

    media(n);

    return 0;
}

