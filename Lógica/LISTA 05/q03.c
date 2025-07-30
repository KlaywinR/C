/*
Desenvolva um programa que faça uma operação de soma ou subtração de
dois números. O usuário poderá escolher a operação desejada. O programa
deve ser rodado em loop até o usuário decidir sair.
*/
#define N_MAX 11
#include <stdio.h>
int main()
{
    int numero;
    printf("SEJA BEM VINDO A TABUADA");

    puts("\nDIGITE UM NUMERO QUE VC QUEIRA DESCOBRIR A TABUADA :   \n");
    scanf("%i", &numero);

    for (size_t i = 1; i < N_MAX; i++)
    {
        printf(" %d x %d eh igual ah: %d\n", numero, i, numero * 10);

    }

    return 0;
}