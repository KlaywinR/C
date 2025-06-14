#include <stdio.h>
int main(void)
{

    float numeros[6] = {1.34, 2.4, 3.66, 4.4, 5.9, 6.76};
    int notas;
    for (int notas = 0; notas <= 5; notas++)

    {
        printf("\n numero[%d] = %.2f", notas, numeros[notas]);
    }


    return 0;
}