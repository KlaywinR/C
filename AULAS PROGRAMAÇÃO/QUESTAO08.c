#include <stdio.h>
#include <math.h>

int main(void)
{

    float cedulas1, cedulas5, cedulas10, cedulas20, cedulas50, cedulas100;
    float valor;

    printf("SEJA BEM VINDO AO CONTADOR DE FINANÇAS, PARA PROSSEGUIR PRESSIONE 'ENTER' NO SEU TECLADO");

    printf(" \n DIGITE AQUI A QUANTIDADE DE MOEDAS DE 1 REAL --->");
    scanf("%f", &cedulas1);

    printf("\n DIGITE AQUI A QUANTIDADE DE CÉDULAS DE 5 REAIS --->");
    scanf("%f", &cedulas5);

    printf("\n DIGITE AQUI A QUANTIDADE DE CÉDULAS DE 10 REAIS --->");
    scanf("%f", &cedulas10);

    printf("\n DIGITE AQUI A QUANTIDADE DE CÉDULAS DE 20 REAIS --->");
    scanf("%f", &cedulas20);

    printf("\n DIGITE AQUI A QAUNTIDADE DE CÉDULAS DE 50 REAIS --->");
    scanf("%f", &cedulas50);

    printf("\n DIGITE AQUI A QAUNTIDADE DE CÉDULAS DE 100 REAIS --->");
    scanf("%f", &cedulas100);

    valor = (cedulas1 * 1) + (cedulas5 * 5) + (cedulas10 * 10) + (cedulas20 * 20) + (cedulas50 * 50) + (cedulas100 * 100);

    printf(" O VALOR TOTAL DAS FINANÇAS É DE: %.2f\n", valor);

    return 0;
}