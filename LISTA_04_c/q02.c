/*
Faça um programa em linguagem C que preenche um conjunto de dados com 5000 números reais
entre 0 e 1. O seu programa deve exibir o valor médio e o desvio padrão dos elementos presentes
neste conjunto de dados.
*/
#define TAM 5000
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float soma;                              // VARIAVEL FLOAT DE SOMA;
    float media_padrao, desvio_padrao = 0.0; // inicilizacao da variável com ZERO.
    float dados[TAM];

    srand(time(NULL));

    for (int i = 0; i < TAM; i++)
    {
        dados[i] = (float)rand() / RAND_MAX;
        soma += dados[i];
    }

    // calculando o valor médio de dados:

    media_padrao = soma / TAM;
    for (int i = 0; i < TAM; i++)
    {
        desvio_padrao += pow(dados[i] - media_padrao, 2);
    }
    desvio_padrao = sqrt(desvio_padrao / TAM);

    printf("\tO VALOR MEDIO EH: %f\t", media_padrao);
    printf("\tO DESVIO MEDIO EH: %f\t", desvio_padrao);

    return 0;
}