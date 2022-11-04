#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct {
    int n;
    int *valor;
} TVectorInt;


TVectorInt
TVectorInt_criar() {
    TVectorInt vector;

    vector.valor = NULL;
    vector.n = 0;
    return vector;
}

int
TVectorInt_tamanho(TVectorInt *vector) {
    return vector->n;
}

void
TVectorInt_realocar(TVectorInt *vector, int i) {
    int k, *vector_antigo;

    vector_antigo = vector->valor;
    vector->valor = (int*)malloc(sizeof(int)*(i+1));
    if (vector->valor) {
        for (k = 0; k < vector->n; k++) {
            vector->valor[k] = vector_antigo[k];
        }
        vector->n = i + 1;
    } else {
        vector->n = 0;
    }

    if (vector_antigo) {
        free(vector_antigo);
    }
}

void
TVectorInt_set_valor(TVectorInt *vector, int i, int valor) {
    if (i >= vector->n) {
        TVectorInt_realocar(vector, i);
    }
    if (i >= 0 && i < vector->n) {
        vector->valor[i] = valor;
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

    vector = TVectorInt_criar();

    for (i = 0; i < n; i++) {
        TVectorInt_set_valor(&vector, i, rand() % base);
    }

    return vector;
}

void
mostra_vector(TVectorInt vector) {
    int i;

    for (i = 0; i < TVectorInt_tamanho(&vector); i++) {
        printf("%d ", TVectorInt_get_valor(vector, i));
    }
    printf("\n");
}


int
main(void) {
    TVectorInt vector;
    int n, base;
    clock_t instante;

    srand(1);

    printf("Dimensao: ");
    scanf(" %d", &n);
    printf("Valor maximo: ");
    scanf(" %d", &base);

    instante = clock();
    vector = vector_aleatorio(n, base);

    if (n < 100) {
        mostra_vector(vector);
    }
    TVectorInt_libertar(&vector);

    printf("Tempo (s): %.3f\n", (float)(clock() - instante) / CLOCKS_PER_SEC);

    return 0;
}
