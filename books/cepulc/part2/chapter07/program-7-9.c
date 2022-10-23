#include <stdio.h>

#define SIZE 10


int
main(void) {
    int matriz1[SIZE][SIZE];
    int matriz2[SIZE][SIZE];
    int matriz_soma[SIZE][SIZE];
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matriz1[i][j] = i + j;
            matriz2[i][j] = i * j;
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matriz_soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%3d", matriz_soma[i][j]);
        }
        printf("\n");
    }
    return 0;
}
