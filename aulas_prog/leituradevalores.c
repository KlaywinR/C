#include <stdio.h>

int main(void)
{

    // Desenvolvido em C com o intuito  de ler 10 valores e imprimir o maio e o menor valores lidos.
    printf("digite 10 valores inteiros aqui:\n");
    int i, maior, menor, valor;
    maior = 0;
    menor = 0;
    for (i = 0; i < 10; i++)
    {
        printf("DIGITE O VALOR %d: ", i + 1);
        scanf("%d", &valor);
        if (i == 0)
        {
            maior = valor;
            menor = valor;
        }
        else if (valor > maior)
        {
            maior = valor;
        }
        else if (valor < menor)
        {
            menor = valor;
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
