#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int n;
    int *valor;
} TVectorInt;


TVectorInt
vector_aleatorio(int n, int base) {
    TVectorInt vector;
    int i;

    vector.valor = (int*)malloc(sizeof(int) * n);

    if (vector.valor) {
        for (i = 0; i < n; i++) {
            vector.valor[i] = rand() % base;
        }
        vector.n = n;
    } else {
        vector.n = 0;
    }

    return vector;
}


void
mostra_vector(TVectorInt vector) {
    int i;

    for (i = 0; i < vector.n; i++) {
        printf("%d ", vector.valor[i]);
    }
    printf("\n");
}


int
main(void) {
    TVectorInt vector;
    int n, base;

    srand(1);

    printf("Dimensao: ");
    scanf(" %d", &n);
    printf("Valor maximo: ");
    scanf(" %d", &base);

    vector = vector_aleatorio(n, base);

    if (vector.valor) {
        mostra_vector(vector);
        free(vector.valor);
    }

    return 0;
}
