/*
Crie um programa em linguagem C que gera duas matrizes A e B de número reais de mesma
dimensão, que devem ser preenchidas randomicamente com números entre -5 e 5. O programa
deve calcular a matriz C = A − B e exibir em tela os elementos da matriz C. A dimensão das
matrizes (número de linhas e colunas) deve ser informada pelo usuário.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    int linhas, colunas;
    float A[100][100], B[100][100], C[100][100];

    printf("digite o numero de linhas : -->   ");
    scanf("%i", &linhas);
    printf("digite o numero de colunas da matriz  : -->  ");
    scanf("%i", &colunas);

    srand(time(NULL));

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            A[i][j] = ((rand() % 110) - 55) / 10.0;
            B[i][j] = ((rand() % 110) - 55) / 10.0;
        }
    }
    // calculo da matriz c - sendo a matriz C igual a: A - B

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    printf("EXIBINDO A MATRIZ C");
    printf("\t");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%6.2f", C[i][j]);
        }
        printf("\n\n\n");
    }

    puts("");

    return 0;
}