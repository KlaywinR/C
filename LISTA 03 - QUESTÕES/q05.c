#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int maior = 0, segundo_maior = 0;
    int numero;

    /* Desenvolva um programa em linguagem C que gere uma sequência de quinze números aleatórios
entre os valores 10 e 100, exibindo-os em tela. Em seguida, o programa deve informar os valores do
maior e do segundo maior números gerados. Observação. Para resolver esta questão será
necessário utilizar as funções rand e srand. da linguagem C, que se encontram na biblioteca
stdlib.h. Efetue uma rápida pesquisa para aprender como utilizar essas funções.
    */
    srand(time(NULL)); // semente geradora de numeros.
    for (int i = 0; i < 15; i++)
    {
        numero = 10 + (rand() % (91)); // geracao de numero pseudoaleatorio entre 10 e 100
        printf("%i ", numero);
         (i != 14 )?printf("-"): printf("");
        if (numero > maior)
        {
            segundo_maior = maior;
            maior = numero;
        }
        else if (numero > segundo_maior)
        {
            segundo_maior = numero;
        }
    }
    printf("\n----------------------------------------\n");
    printf("\no segundo maior eh : %i", segundo_maior);
    printf("\no maior eh : %i", maior);
    printf("\n----------------------------------------\n");

    return 0;
}