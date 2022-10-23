#include <stdio.h>

int
main(void) {
    int a, b, k, contagem;

    printf("Indique K: ");
    scanf(" %d", &k);

    contagem = 0;
    a = 1;

    while (a <= k) {
        b = 1;
        while (b <= k) {
            if (a + b <= k && a * b <= k) {
                contagem++;
            }
            b++;
        }
        a++;
    }

    printf("Total: %d\n", contagem);

    return 0;
}
