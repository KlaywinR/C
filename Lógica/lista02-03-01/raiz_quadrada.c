#include <stdio.h>
#include <math.h>
int main()
{

    float numero, resultado;
    int base, expoente;

    puts("DIGITE UM NUMERO INTEIRO PARA SABER A RAIZ QUADRADA:");
    scanf("%f", &numero);

    resultado = sqrt(numero); // serve oara descibrir a raiz quadrada de um determindo numero!
    printf("A RAIZ QUADRADA EH: %.2f", resultado);

    return 0;
}