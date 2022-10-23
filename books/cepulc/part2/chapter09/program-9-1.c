#include <stdio.h>


int
factorial_r(int n) {
    if (n < 2) {
        return 1;
    }
    return factorial_r(n - 1) * n;
}

int
factorial_i(int n) {
    int i, resultado = 1;

    for (i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int
main(void) {
    int n = 5;

    printf("Factorial de %d: %d = %d\n", n, factorial_r(n), factorial_i(n));
    return 0;
}
