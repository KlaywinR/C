#include <stdio.h>
int main(void)
{

    int a, b, c, i, resultado = 0;
    printf("\n DIGITE O SEU PRIMEIRO NUMERO: \n");
    scanf("%d", &a);
    printf("\n DIGITE O SEU SEGUND NUMERO:   \n");
    scanf("%d", &b);
    printf("\nDIGITE O SEU TERCEIRO NUMERO:  \n");
    scanf("%d", &c);

    for (int i = 0; i < b; i++)
    {
        resultado += a;
    }
    printf(" O rESULTADIO GERAL DA MULTIPPLICAÇÃO EH---> %d\n", resultado);
    printf(" o resultado da multiplicacao eh de %d x %d x %d", a, b, c, i);
    printf(" = %d\n", resultado);
    printf(" o resultado eh %d\n", resultado);

    return 0;
}