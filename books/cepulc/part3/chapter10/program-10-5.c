#include <stdio.h>
#include <stdlib.h>


int*
vector_aleatorio(int n, int base) {
    int *vector, i;

    vector = (int*)malloc(sizeof(int) * n);

    if (vector) {
        for (i = 0; i < n; i++) {
            vector[i] = rand() % base;
        }
    }

    return vector;
}


void
mostra_vector(int* vector, int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}


int
main(void) {
    int *vector, n, base;

    srand(1);

    printf("Dimensao: ");
    scanf(" %d", &n);
    printf("Valor maximo: ");
    scanf(" %d", &base);

    vector = vector_aleatorio(n, base);

    if (vector) {
        mostra_vector(vector, n);
        free(vector);
    }

    return 0;
}
