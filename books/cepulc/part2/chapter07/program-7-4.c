#include <stdio.h>

/* Can't be named strlen if we are to be correct, as there's already a
 * function with such name in the std library
 */
int
my_strlen(char str[]) {
    int i;

    for (i = 0; str[i]; i++) {}

    return i;
}

int
main(void) {
    char str[10];

    printf("Introduza uma string: ");
    fgets(str, 10, stdin);
    printf("A string '%s', tem %d caracteres.\n", str, my_strlen(str));
}
