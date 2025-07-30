#include <stdio.h>
int main()
{
    int cubo, numero;

    printf("DIGITE UM NUMERO");
    scanf("%d", &numero);

    cubo = numero * numero * numero;
    printf("O cubo de %d eh: %d", numero, cubo);

    return 0;
}