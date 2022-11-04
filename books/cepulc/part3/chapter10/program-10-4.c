#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAXSTR 255


/* Hate to write functions for single use, no need to free memory here. */
char*
my_concat(char* str, char* str2) {
    char *ptr;

    if (!str) {
        ptr = (void*)malloc(strlen(str2) + 1);
        if (ptr) {
            strcpy(ptr, str2);
        }
    } else {
        ptr = (void *)malloc(strlen(str) + strlen(str2) + 1);
        if (ptr) {
            strcpy(ptr, str);
            strcat(ptr, str2);
            free(str);
        }
    }

    return ptr;
}

int
main(void) {
    char *texto = NULL, str[MAXSTR];

    while (fgets(str, MAXSTR, stdin)) {
        texto = my_concat(texto, str);
    }

    printf("%s", texto);
    free(texto);
    return 0;
}
