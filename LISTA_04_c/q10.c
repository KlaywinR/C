/*

10) Um armazém trabalha com 10 mercadorias diferentes identificadas pelos números inteiros de 0
a 9. O dono do armazém anota a quantidade de cada mercadoria vendida durante o mês. Ele possui
uma tabela que indica para cada mercadoria o preço de venda. Escreva um programa em linguagem
C que leia a quantidade vendida de cada produto no final do mês (armazenando-os em um vetor Q)
e o preço de venda de cada um (armazenado-os em um vetor P). Logo após, o seu programa deve
calcular e exibir o faturamento mensal do armazém.

*/

#include <stdio.h>
int main()
{
    int q[10];
    float p[10];
    float faturamento = 0.0;

    // lendo todas as quantidades vendidas do produto Q:

    for (int i = 0; i < 10; i++)
    {
        printf("PRODUTO: %d", i);
        scanf("%d", &q[1]);
    }

    // lendo a quantidade de produtos P vendidos:

    for (int i = 0; i < 10; i++)
    {
        printf("PRODUTO: %d", i);
        scanf("%i", &p[1]);
    }

    // demonstrando a qauntidade final de cada produto:

    for (int i = 0; i < 10; i++)
    {
        faturamento += q[1] * p[1];
    }

    float media_do_mensal = faturamento / 10.0;

    printf("O FATURAMENTO MENSAL DO ARMAZEM EH : %.2f\n", faturamento);
    printf("A MEDIA DO FATURAMENTO MENSAL DO ARMAZEM EH : %.2f\n", media_do_mensal);

    return 0;
}