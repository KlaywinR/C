/*
Receber um número e indicar se ele é par ou ímpar. */

#include <stdio.h>
int main()
{

    int numero = 0;
    printf("DIGITE O NUMERO: ");
    scanf("%i", &numero);
    if (numero % 2 == 0)
        printf("O NUMERO EH PAR");
    else
        printf("o numero eh impar");

    return 0;
}