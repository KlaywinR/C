#include <stdio.h>
int main(void)
{
    int numero;
#define numeros 10
    for (int k = 1; k <= 10; k++)
    {

        printf(" ####### DIGITE UM NUMERO QUE VOCE DESEJA DESCOBRIR A TABUADA ######: ");
        scanf("%i", &numero);

        for (int i = 1; i <= 10; i++)
        {
            printf("%d MULTIPLICADO POR %d = %d\n", numero, i, numero * i);
        }
    }

    return 0;
}