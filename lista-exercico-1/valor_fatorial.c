#include <stdio.h>

int main(void)
{

    int n;
    int fatorial = 1;

    printf("digite um numero");
    scanf("%i", &n);

    printf("%i!", n);

    if (n >= 0)
    {
        if (n == 0)
        {
            fatorial = 1;
        }
        else
        {
            while (n >= 1)
            {
                fatorial = fatorial * n;
                n = n - 1;
            }
        }
    }
    else
    {
        printf("valor invalido");
    }

    printf("\n%i\n", fatorial);

    return 0;
}