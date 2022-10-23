#include <stdio.h>

int
main(void) {
    int a, b, k, contagem;

    printf("Indique K: ");
    scanf(" %d", &k);

    contagem = 0;

    for (a = 1; a <= k; a++) {
        for (b =1; b <= k; b++) {
            if (a + b <= k && a * b <= k) {
                contagem++;
            }
        }
    }

    printf("Total: %d\n", contagem);

    return 0;
}
