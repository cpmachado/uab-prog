#include <stdio.h>


int
main(void) {
    char str[10];
    int i;

    printf("Introduza uma string: ");
    fgets(str, 10, stdin);
    /* gets(str); -- Never use gets -- */

    for (i = 0; str[i]; i++) {
        printf("Caracter %d: %c\n", i, str[i]);
    }

    return 0;
}

