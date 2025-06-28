#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanho 2
int main()
{
    int idades[tamanho];
    int maiores_de_idade = 0;
    int vetor[tamanho];
    int percentual = 0;

    for (int i = 0; i < tamanho; i++)
    {
        printf(" DIGITE A IDADE: \n");
        scanf("%i", &idades[i]);
        vetor[i] = idades[i];
        if (idades[i] >= 18)
        {
            maiores_de_idade++;
        }
    }
    if (maiores_de_idade > 0)
    {
        printf("VOCE EH MAIOR DE IDADE");
    }
    else
    {
        (maiores_de_idade < 0);
        printf(" VOCE NAO EH MAIOR DE IDADE!");
    }
    printf("o vetor eh: ");
    for (int j = 0; j < tamanho; j++)
    {
        printf("%d ", vetor[j]);
    }
    printf("CALCULANDO O PERCENTUAL DOS MAIORES DE 18:");
    percentual == maiores_de_idade % 100;
    scanf("%d", &percentual);
    printf("O percentual eh de: %d ", percentual);

    printf("\n");

    return 0;
}