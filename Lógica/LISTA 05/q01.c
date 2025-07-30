/*
Escreva um programa em C que realiza a soma de vários números. A
quantidade de números a serem somados não é conhecida a priori e nem
fornecida pelo usuário explicitamente. O programa deve começar lendo do
usuário um número. Em seguida, o programa deve perguntar ao usuário se
mais algum número vai ser digitado; se o usuário digitar 1, o programa deve
ler mais um número e então novamente perguntar se mais algum número vai
ser digitado; quando o usuário finalmente digitar um número diferente de 1,
o programa deve imprimir na tela a soma de todos os números que foram
digitados (não incluindo, porém, os números digitados como resposta à
pergunta sobre se mais algum número deve ser digitado)
*/

#define N_MAX 1
#include <stdio.h>
int main()
{
    int soma = 0, numero, continuar;

    printf("DIGITE UM NUMERO INTEIRO: ");
    scanf("%d", &numero);
    soma += numero;

    printf("digite 1 para continuar, caso contrario digite qualquer outro numero para sair!");
    scanf("%i", &continuar);

    while (continuar == 1)
    {
        printf("DIGITE OUTRO NUMERO AQUI:");
        scanf("%d", &numero);
        soma += numero;

        printf("digite 1 para continuar, caso contrario digite qualquer outro numero para sair!");
        scanf("%i", &continuar);
    }
    printf("A SOMA DE TODOS OS NUMEROS QUE VC DIGITOU EH: %d", soma);

    return 0;
}