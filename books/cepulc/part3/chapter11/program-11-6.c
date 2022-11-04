#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int n;
    int *valor;
} TVectorInt;


TVectorInt
TVectorInt_criar(int n) {
    TVectorInt vector;

    vector.valor = (int*)malloc(sizeof(int) * n);

    if (vector.valor) {
        vector.n = n;
    } else {
        vector.n = 0;
    }

    return vector;
}

int
TVectorInt_tamanho(TVectorInt vector) {
    return vector.n;
}

void
TVectorInt_set_valor(TVectorInt vector, int i, int valor) {
    if (i >= 0 && i < vector.n) {
        vector.valor[i] = valor;
    }
}

int
TVectorInt_get_valor(TVectorInt vector, int i) {
    if (i >= 0 && i < vector.n) {
        return vector.valor[i];
    }
    return 0;
}

void
TVectorInt_libertar(TVectorInt *vector) {
    if (vector->valor) {
        free(vector->valor);
        vector->valor = NULL;
        vector->n = 0;
    }
}

/* -------------------------- */

TVectorInt
vector_aleatorio(int n, int base) {
    TVectorInt vector;
    int i;

    vector = TVectorInt_criar(n);

    for (i = 0; i < TVectorInt_tamanho(vector); i++) {
        TVectorInt_set_valor(vector, i, rand() % base);
    }

    return vector;
}

void
mostra_vector(TVectorInt vector) {
    int i;

    for (i = 0; i < TVectorInt_tamanho(vector); i++) {
        printf("%d ", TVectorInt_get_valor(vector, i));
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
