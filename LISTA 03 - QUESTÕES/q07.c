#include <stdio.h>
int main(void)
{
    int n, j;
    double t = 0; // quantidaade de termos do somatorio

    printf("\n digite o valor de N\n:     ");
    scanf("%i", &n);

    if (n > 0)
    {
        t = 0;
        for (int i = 1, j = n; i <= n; i++, j--)
        {

            t += i / (double)j;
        }
        printf("%lf", t);
    }
    else
    {
        printf("\n ERRO: N deve ser positivo");
    }

    return 0;
}