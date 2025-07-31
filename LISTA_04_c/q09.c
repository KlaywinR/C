/*

9) Crie um programa em linguagem C que leia do usuário um vetor de inteiros de 10 elementos (sem
restrições). Em seguida, o seu programa deve retirar todos os valores nulos ou negativos do vetor
que foram informados pelo usuário. Imprima em tela o vetor após a retirada dos números
indesejados, nulos e negativos. Veja exemplo:
*/

#include <stdio.h>

int main()
{
    int vetor[10], resultado[10], i, j;

    // lendo todos ps 10 numeros digitados pelo usuario:
    for (int i = 0; i < 10; i++)
    {

        printf("ELEMENTO: | %d |", i + 1);
        scanf("%d", &vetor[i]);
    }
    if (vetor[i] > 0)
        resultado[i] = vetor[i];
    j++;

    puts("VETOR UNICO DE NUMEROS POSITIVOS: ");
    if (j == 0)
        puts("ESTE NUMERO JA FOI INFORMADO!! ");
    else
        for (int i = 0; i < j; i++)
        {
            printf("%d\n", resultado[i]);
        }

    puts("\n");

    return 0;
}
