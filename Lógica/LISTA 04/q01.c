/*
. Faça um programa que receba dois números do usuário e indique qual é o
maior
*/

#include <stdio.h>
int main()
{
    int numero1, numero2;
    printf("DIGITE O PRIMEIRO NUMERO: ->");
    scanf("%i", &numero1);
    printf("DIGITE O SEGUNDO NUMERO -> ");
    scanf("%i", &numero2);

    if (numero1 > numero2)
        printf("O NUMERO %d eh o maior numero", numero1);
    else if (numero2 > numero1)
        printf("O NUMERO %d é maior numero", numero2);
    else
        printf("OS NUMEROS SAO IGUAIS");

    return 0;
}