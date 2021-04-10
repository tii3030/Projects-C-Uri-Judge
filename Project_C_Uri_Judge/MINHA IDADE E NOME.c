#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char nome[34];

    printf("DIGITE SEU NOME\n");
    scanf("%s", &nome);
    printf("NOME: %s\n", nome);

    printf("DIGITE SUA IDADE\n");
    scanf("%d", &idade);
    printf("IDADE: %d\n", idade);

    return 0;

}
