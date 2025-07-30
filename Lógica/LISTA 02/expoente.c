#include <stdio.h>
#include <math.h>
int main()
{

    int base, expoente, resultado_final;

    puts("DIGITE O NUMERO DA BASE:");
    scanf("%i", &base);
    puts("DIGITE O NUMERO DO EXPOENTE:");
    scanf("%i", &expoente);

    resultado_final = pow(base, expoente);   // usado para calcular a potência de algum numero.
    printf("O resultado final eh: %i", resultado_final);
    

    return 0;
}