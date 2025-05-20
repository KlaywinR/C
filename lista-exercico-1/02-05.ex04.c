#include <stdio.h>

///Elabore um programa em linguagem C que recebe do usuário os possíveis lados de um triângulo.
//Caso seja possível formar um triângulo com os dados informados, imprima em tela a classificação
//do triângulo: equilátero (todos os lados iguais), isósceles (dois lados iguais) e escaleno (todos os
//lados diferentes).

int main(void) {
    int lado1, lado2, lado3;

    // Entrada dos lados do triângulo
    printf("Digite o tamanho do primeiro lado: ");
    scanf("%d", &lado1);

    printf("Digite o tamanho do segundo lado: ");
    scanf("%d", &lado2);

    printf("Digite o tamanho do terceiro lado: ");
    scanf("%d", &lado3);

    // Verificar se os lados formam um triângulo
    if ((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2)) {
        // Classificar o triângulo
        if (lado1 == lado2 && lado2 == lado3) {
            printf("\nO triângulo é Equilátero, pois todos os lados são iguais.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("\nO triângulo é Isósceles, pois dois lados são iguais.\n");
        } else {
            printf("\nO triângulo é Escaleno, pois todos os lados são diferentes.\n");
        }
    } else {
        printf("\nOs valores informados NÃO podem formar um triângulo.\n");
    }

    return 0;
}