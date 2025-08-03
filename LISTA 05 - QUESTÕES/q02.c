/*
Implemente um programa em linguagem C que leia os elementos inteiros de uma matriz quadrada
de ordem informada pelo usuário e imprima em tela o valor do produto dos elementos de sua
diagonal secundária.
*/
#include <stdio.h>
int main()
{

    long long produto = 1;
    int n;
    // digitandoa ordem de saida da matriz quadrada:
    puts("DIGITE A ORDEM DA SUA MATRIZ QUADRADA: ");
    scanf("%d", &n);

    // aqui declarei toda a matriz de moodo geral:
    int matriz[n][n];

    // criando o inicializador de numeros aleaatótios:
    srand(time(NULL));

    //--- lendo numeros da matriz
    printf("DIGITE OS NUMEROS DA MATRIZ | N |", n, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("MATRIZ[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        produto *= matriz[i][n - 1 - i];
    }

    printf("\nO PRODUTO DA SOMA DA DIAGONAL SECUNDARIA EH: %lld\n", produto);

    return 0;
}