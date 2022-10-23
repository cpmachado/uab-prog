#include <stdio.h>

int
main(void) {
    int opcao;

    do {
        printf("Menu:\n");
        printf("1 - opcao A\n");
        printf("2 - opcao B\n");
        printf("3 - opcao C\n");
        printf("0 - sair\n");
        printf("Opcao: ");
        scanf(" %d", &opcao);

        switch (opcao) {
            case 1:
                printf("Opcao escolhida A\n");
                break;
            case 2:
                printf("Opcao escolhida B\n");
                break;
            case 3:
                printf("Opcao escolhida C\n");
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao > 0);

    printf("Fim do programa.\n");

    return 0;
}
