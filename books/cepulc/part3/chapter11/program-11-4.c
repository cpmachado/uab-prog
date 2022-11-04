#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAXSTR 255


typedef struct {
    int ano, mes, dia;
} TData;

typedef struct {
    char *nome;
    char sexo;
    TData nascimento;
    char *morada;
    char *email;
    long telefone;
} TPessoa;


void
ler_pessoa(TPessoa *pessoa) {
    char str[MAXSTR];

    printf("Nome: ");
    fgets(str, MAXSTR, stdin);

    str[strlen(str) - 1] = '\0';
    pessoa->nome = (char*)malloc(strlen(str) + 1);
    strcpy(pessoa->nome, str);

    printf("Sexo: ");
    scanf(" %c", &pessoa->sexo);

    printf("Data de nascimento (dd-mm-aaaa); ");
    scanf(" %d-%d-%d%*c",
        &pessoa->nascimento.dia,
        &pessoa->nascimento.mes,
        &pessoa->nascimento.ano);

    printf("Morada: ");
    fgets(str, MAXSTR, stdin);

    str[strlen(str) - 1] = '\0';
    pessoa->morada = (char*)malloc(strlen(str) + 1);
    strcpy(pessoa->morada, str);

    printf("Email: ");
    fgets(str, MAXSTR, stdin);

    str[strlen(str) - 1] = '\0';
    pessoa->email = (char*)malloc(strlen(str) + 1);
    strcpy(pessoa->email, str);

    printf("Telefone: ");
    scanf(" %ld", &pessoa->telefone);
}


void
mostra_pessoa(TPessoa *pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("Sexo: %c\n", pessoa->sexo);
    printf("Data de nascimento: %d-%d-%d\n",
        pessoa->nascimento.dia,
        pessoa->nascimento.mes,
        pessoa->nascimento.ano);
    printf("Morada: %s\n", pessoa->morada);
    printf("Email: %s\n", pessoa->email);
    printf("Telefone: %ld\n", pessoa->telefone);
}

void
libertar(TPessoa *pessoa) {
    free(pessoa->nome);
    free(pessoa->morada);
    free(pessoa->email);
}

int
main(void) {
    TPessoa pessoa;

    ler_pessoa(&pessoa);
    mostra_pessoa(&pessoa);
    libertar(&pessoa);

    return 0;
}
