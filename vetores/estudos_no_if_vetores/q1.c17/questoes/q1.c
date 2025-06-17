#include <stdio.h>
int main(void)
{
#define n_funcionarios 3
    float salario[n_funcionarios];

    for (int i = 0; i <= n_funcionarios; i++)
    {
        printf(" o salario do funcionario eh %i", i + 1);
        scanf("%f", &salario[i]);
    }
    float aumento;
    printf("INFORME O AUMENTO EM PERCENTUAL DO (%%)\n:");
    scanf("%f", &aumento);
    if (aumento > 0)
        for (int i = 0; i < n_funcionarios; i++)
        {
            salario[i] = salario[i] * (aumento / 100);
            printf(" O NOVO SALARIO DE CADA FUNCIONARIO EH : [%i]: %f\n", i + 1, salario[i]);
        }

    else
    {
        printf("ERRO: valor de aumento invalido");
    }

    return 0;
}