/*
Crie uma função que calcula e retorna o número de combinações de n elementos p a p. Sabe-se que
a expressão matemática para a combinação é dada por:

Cp
n =
n!
p! (n − p)!
*/
int combinacao(int n, int p);
int fatorial(int n);
int fat(num);

#include <stdio.h>
#include <math.h>
int main()
{

    // implementar uma pergunta ao usuario sobre o qual fatorial de qual numero ele quer saber.
    printf("FATORIAL DE 3: %i", fat(3));
    printf("FATORIAL DE 7: %i", fat(7));
    printf("FATORIAL DE 6: %i", fat(6));

    printf("\nRETORNANDO OS VALORES DAS COMBINACOES:\n");
    printf("\nCOMBINACAO DE 4&2: %i", combinacao(4, 2));
    printf("\nCOMBINACAO DE 4&3: %i", combinacao(4, 3));
    printf("\nCOMBINACAO DE 2&9: %i", combinacao(2, 9));

    return 0;
}

// funcao que calcla a combinação:
int combinacao(int n, int p)
{
    int c;

    c = fatorial(n) / fatorial(p) * fatorial(n - p);

    return c;
}

// função que calcula o fatorial de um numero:
int fatorial(int n)
{
    int f = 1;
    for (int i = n; i > 1; i--)
    {
        f = i * f;
    }
    return f;
}

/// implantando uma função recursiva ---->

int fat(num)
{
    if (num = 0)
    {
        return 1;
    }
    else
    {
        return num * fat(num - 1);
    }
}
