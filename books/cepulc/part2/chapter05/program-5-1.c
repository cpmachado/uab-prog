#include <stdio.h>

int
main(void) {
    int opcao;

    printf("Menu:\n");
    printf("1 - opcao A\n");
    printf("2 - opcao B\n");
    printf("3 - opcao C\n");
    printf("0 - sair\n");
    printf("Opcao: ");
    scanf(" %d", &opcao);

    while (opcao > 0) {
        if (opcao == 1) {
            printf("Opcao escolhida A\n");
        } else if (opcao == 2) {
            printf("Opcao escolhida B\n");
        } else if (opcao == 3) {
            printf("Opcao escolhida C\n");
        } else if (opcao) {
            printf("Opcao invalida\n");
        }
        printf("Menu:\n");
        printf("1 - opcao A\n");
        printf("2 - opcao B\n");
        printf("3 - opcao C\n");
        printf("0 - sair\n");
        printf("Opcao: ");
        scanf(" %d", &opcao);
    }

    printf("Fim do programa.\n");

    return 0;
}
