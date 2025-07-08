#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define numeros 10
#define num_max 50
int main()
{

    srand(time(NULL)); // semente de numeros aleatorios!

    int conjunto[10];
    printf("Conjunto Gerado:  ");
    for (int i = 0; i < numeros; i++)
    {
        conjunto[i] = rand() % (num_max + 1);
        printf("%i", conjunto[i]);
    }
    int aux;
    // em ordem invertida
    for (int i = 0, j = (numeros - 1); i < j; i++, j--)
    {
        printf("\n%i %i %i", i, j);
        aux = conjunto[i] = conjunto[j];
        conjunto[j] = aux;
    }
    printf("Conjunto Invertido:  ");
    for (int i = 0; i < num_max; i++)
    {
        printf("\n%i", conjunto[i]);
    }

    return 0;
}