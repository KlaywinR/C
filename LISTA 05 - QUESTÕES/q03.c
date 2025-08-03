/*
Elabore um programa em linguagem C que leia os elementos inteiros de uma matriz quadrada de
ordem informada pelo usuário. Em seguida o usuário terá a opção de escolher entre exibir a soma
de todos os elementos acima da diagonal principal ou a soma de todos os elementos abaixo da
diagonal principal.
*/
#include <stdio.h>

int main() {
    int n, opcao, soma = 0;

    // lendo a ordem da matriz 
    printf("Digite a ordem da matriz quadrada (n): ");
    scanf("%d", &n);


    //inicializando a matri quadrada:
    int matriz[n][n];

    // lendo a matriz
    printf("\nDigite os elementos da matriz %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nEscolha uma opcao:\n");
    printf("1 - Somar os elementos ACIMA da diagonal principal\n");
    printf("2 - Somar os elementos ABAIXO da diagonal principal\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    // Calcula a soma
    if (opcao == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                soma += matriz[i][j];
            }
        }
        printf("\nSoma dos elementos acima da diagonal principal: %d\n", soma);
    } else if (opcao == 2) {
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                soma += matriz[i][j];
            }
        }
        printf("\nSoma dos elementos abaixo da diagonal principal: %d\n", soma);
    } else {
        printf("\nOpcao invalida.\n");
    }

    return 0;
}
