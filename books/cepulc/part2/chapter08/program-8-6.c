#include <stdio.h>
#include <string.h>


/* Why use std library names */
char*
my_strstr(char* find, char* str) {
    int i;

    while (*str) {
        for (i = 0; str[i] && find[i] && find[i] == str[i]; i++) {}
        if (!find[i]) {
            return str;
        }
        str++;
    }

    return NULL;
}

int
main(void) {
    char str[] = "percorrer toda a string str";
    char find[10];
    char *resultado;

    printf("Introduza a string de procura: ");
    /* Dont' use gets(find) */
    fgets(find, 10, stdin);
    /* remove newline */
    find[strlen(find) - 1] = '\0';

    resultado = my_strstr(find, str);
    printf("Resultado: %s\n", resultado);

    return 0;
}
