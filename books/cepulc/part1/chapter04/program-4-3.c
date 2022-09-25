#include <stdio.h>

int
main(void) {
    char c = 'a';

    while (c <= 'z') {
        printf("Letra %c = %d\n", c, c);
        c++;
    }

    return 0;
}
