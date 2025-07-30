/*
/*
Desenvolva um programa que faça uma operação de soma ou subtração de
dois números. O usuário poderá escolher a operação desejada. O programa
deve ser rodado em loop até o usuário decidir sair.
*/
#define N_max 11
#include <stdio.h>
int main()
{

    int numero;

    printf("SEJA BEM VINDO AH TABUADA");

    for (int i = 1; i < N_max; i++)
    {
        printf("%d x %d = %d", numero, i, numero * 10);
    }

    return 0;
}