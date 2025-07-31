/*
8) Elabore um programa em linguagem C que preencha um vetor de 100 números inteiros entre 0 e
200. Em seguida, o usuário deve informar um valor e o seu programa deve verificar se o valor
informado pode ser encontrado no vetor. Em caso positivo, o programa deve exibir quantas vezes
existe o número no vetor e em quais posições (índices).
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int vetor[100], i;

    srand(time(NULL)); // pegando todos os numeros simples e aleatorios de acordo com  semente de tempo

    printf("PREENCHENDO O VETOR:");
    for (int i = 0; i < 100; i++)
    {
        vetor[i] = rand() % 201; // inicializando com numeros aleatórios!
        printf("ELEMENTO: %d: %d\n", i, vetor[i]);
    }

    return 0;
}