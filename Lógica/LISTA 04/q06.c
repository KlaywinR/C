/*
Fazer um programa que ler o preço de um produto. Se esse preço for maior
que 100 o valor é inflacionado em 10% e em 20% se ele for menor ou igual
a 100. */

#include <stdio.h>
int main()
{

    float preco = 0, preco_final;

    printf("DIGITE O PREÇO DO PRODUTO: ->  ");
    scanf("%f", &preco);

    if (preco > 100)
    {
        preco_final = preco * 1.10;
    }
    else
    {
        preco_final = preco * 1.20;
    }

    printf("O PRECO FINAL APOS OS IMPOSTOS DO LULA EH: %.2f", preco_final);

    return 0;
}