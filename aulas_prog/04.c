#include <stdio.h>
#include <math.h>

int main(void)
{
    double num;

    printf("\nADENTRE COM UM NÚMERO: ");
    scanf("%lf", &num);

    if (num > 0)
    {
        printf("A RAIZ QUADRADA É: %.2lf\n", sqrt(num)); // A raiz retornará um double.
    }
    else if (num < 0)
    {
        printf("O QUADRADO É: %.2lf\n", pow(num, 2)); // Corrigido o uso da função pow.
    }
    else
    {
        printf("O NÚMERO É ZERO, NÃO HÁ RAIZ E NEM QUADRADO NEGATIVO.\n");
    }

    return 0;
}

// elabore um programa em c que receba um numero do usuario e imprime a raiz quzdrada desse numero, caso ele seja positivo ou o quadrado desse numero seja negativo
