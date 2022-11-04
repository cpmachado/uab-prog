#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct SListaInt {
    int valor;
    struct SListaInt *seguinte;
} TListaInt;

TListaInt*
TListaInt_adiciona(TListaInt* lista, int valor) {
    TListaInt *novo = (TListaInt*)malloc(sizeof(TListaInt));

    if (novo) {
        novo->valor = valor;
        novo->seguinte = lista;
        return novo;
    }

    return lista;
}

void
TListaInt_libertar(TListaInt *lista) {
    TListaInt *aux;

    while (lista) {
        aux = lista->seguinte;
        free(lista);
        lista = aux;
    }
}

/* -------------------------- */

TListaInt*
lista_aleatorio(int n, int base) {
    TListaInt *lista = NULL;
    int i;

    for (i = 0; i < n; i++) {
        lista = TListaInt_adiciona(lista, rand() % base);
    }

    return lista;
}

void
mostra_lista(TListaInt *lista) {
    while (lista) {
        printf("%d ", lista->valor);
        lista = lista->seguinte;
    }

    printf("\n");
}


int
main(void) {
    TListaInt *lista;
    int n, base;
    clock_t instante;

    srand(1);

    printf("Dimensao: ");
    scanf(" %d", &n);
    printf("Valor maximo: ");
    scanf(" %d", &base);

    instante = clock();
    lista = lista_aleatorio(n, base);

    if (n < 100) {
        mostra_lista(lista);
    }

    TListaInt_libertar(lista);

    printf("Tempo (s): %.3f\n", (float)(clock() - instante) / CLOCKS_PER_SEC);

    return 0;
}
