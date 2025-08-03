/*
Desenvolva um programa em linguagem C que leia os elementos inteiros de uma matriz quadrada
de ordem n e, em seguida, exiba em tela somente os seus elementos da diagonal principal. A ordem
da matriz deve ser informada pelo usuário. Observação. Caso queira, os elementos da matriz podem
ser gerados de forma aleatória.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int N;
    puts("\nDIGITE A ORDEM DA MATRIZ QUADRADA:");
    scanf("%d", &N);

    int matriz[N][N];

    srand(time(NULL));

    puts("\nA MATRIZ COMPLETA: ");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matriz[i][j] = rand() % 100;
            printf("%4d", matriz[i][j]);
        }
    }

    printf("\n\n");

    puts("\nA DIAGONAL PRINCIPAL: ");
    for (int i = 0; i < N; i++)
    {
        printf("matriz[%d][%d] = %d\n", i, i, matriz[i][i]);
    }

    printf("\n\n");

    return 0;
}