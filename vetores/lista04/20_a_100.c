/*
Crie um programa em C que gere aleatoriamente 20 número inteiros entre 0 e 100. O programa deve calcular e exibir a média dos valores PARES e a média dos valores ÍMPARES. Ao final, devem ser exibidos os números pares maiores que a média PAR e os números ímpares menores que a média IMPAR.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, num, count_par = 0, count_impar = 0;
    int soma_pares = 0, soma_impares = 0;
    int pares[20], impares[20];
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        num = rand() % 101;
        if (num % 2 == 0)
        {
            pares[count_par] = num;
            soma_pares += num;
            count_par++;
        }
        else
        {
            impares[count_impar] = num;
            soma_impares += num;
            count_impar++;
        }
        printf("%d\n", num);
    }
    float media_par = (count_par > 0) ? (float)soma_pares / count_par : 0;
    float media_impar = (count_impar > 0) ? (float)soma_impares / count_impar : 0;
    printf(" A MEDIA DOS PARES EH DE: %.2f\n", media_par);
    printf(" A MEDIA DOS IMPARES EH DE : %.2f\n", media_impar);

    printf("\nPARES MAIORES QUE A MEDIA PAR: \n ");
    for (i = 0; i < count_par; i++)
    {
        if (pares[i] > media_par)
        {
            printf("%d ", pares[i]);
        }
    }

    printf("\nIMPARES MENORES QUE A MEDIA IMPAR: \n");
    for (int i = 0; i < count_impar; i++)
    {
        if (pares[i] < media_impar)
        {
            printf("%d", impares[i]);
        }
    }

    return 0;
}
