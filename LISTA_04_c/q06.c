/*
6) Faça um programa em linguagem C que leia um vetor de 10 elementos. Logo após, encontre e exiba
o menor elemento e a sua posição (índice) no vetor. Por fim, o programa deve dividir todos os
elementos do vetor pelo seu menor elemento e mostrar o vetor modificado após a realização dos
cálculos.
*/
#define N_MAX 10
#include <stdio.h>
int main()
{

    int vetor[0];
    int vetor_positivo[10];
    int i, j;

    puts("DIGITE 10 NUMERO POSITIVOS INTEIROS: ");
    for (int i = 0; i < N_MAX; i++)
    {
        printf("ELEMENTO %d: ", i + 1);
        scanf("%i", &vetor[i]);
    }
    if (vetor[i] > 0)
        vetor_positivo[j] = vetor[i];
    j++;

    puts("VETOR DE NUMEROS POSITIVO: ");
    if (vetor_positivo == 0)
        printf("NENHUM NUMERO POSITIVO ENCONTRADO");
    else
        for (int i = 0; i < j; i++)
        {
            printf("%i", vetor_positivo[i]);
        }
    printf("\n\n");

    return 0;
}