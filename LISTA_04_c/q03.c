/*
3) Desenvolva um programa em linguagem C que leia do usuário dois vetores de 10 posições e realiza
a multiplicação dos elementos de mesmo índice destes vetores, colocando o resultado em um
terceiro vetor. Como saída, o seu programa deve exibir o vetor resultante.
*/
#define TAM 10
#include <stdio.h>
int main()
{
    int vetor01[TAM], vetor02[TAM], resultado[TAM], i;
    printf("DIGITE OS 1O PRIMEIROS NUMEROS PARA PREENCHER O VETOR 01: -> ");
    for (int i = 0; i < TAM; i++)
    {
        printf("vetor01[%d]", i);
        scanf("%d", &vetor01[i]);
    }

    printf("DIGITE OS 1O PRIMEIROS NUMEROS PARA PREENCHER O VETOR 02: -> ");
    for (int i = 0; i < TAM; i++)
    {
        printf("vetor02[%d]", i);
        scanf("%d", &vetor02[i]);
    }

    puts("MULTIPLICANDO OS VETORES: ");
    for (int i = 0; i < TAM; i++)
    {
        resultado[i] = vetor01[i] * vetor02[i];
    }
    printf("RESULTADO DE VETORES");
    for (int i = 0; i < TAM; i++)
    {
        printf("resultado[%d] = %d\n", i, resultado[i]);
    }

    return 0;
}