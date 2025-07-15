/*
Desenvolva um programa em linguagem C que deve armazenar 10 números digitados pelo usuário.
Os valores digitados devem ser armazenados em dois vetores: um que armazena somente os
números pares, e outro que armazena somente os números ímpares. No final, os valores dos dois
vetores devem ser exibidos na tela. Observação. As posições dos vetores que não receberem valores
devem armazenar o valor zero.*/
#include <stdio.h>
int main()
{

    int numeros_pares[10] = {0}, numeros_impares[10] = {10}, numeros[10];

    int i, pA = 0, iM = 0;
    // lendo os numeros em formato geral

    for (int i = 0; i < numeros; i++)
    {
        printf("DIGITE O |%d|", i + 1);
        scanf("%d", &numeros[i]);
        if (numeros[i] % 2 == 0)
        {
            numeros_pares[pA] = numeros[i];
            pA++;
        }
        else
        {
            numeros_impares[iM] = numeros[i];
            iM++;
        }
    }

    // mostrando o vetor de pares:

    printf("DEMONSTRANDO O VETOR DE NUMEROS PARES:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numeros_pares[i]);
    }

    printf("DEMONSTRANDO O VETOR DE NUMEROS IMPARES:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numeros_impares[i]);
    }

    puts("------------");
    printf("OBRIGADO!");

    return 0;
}