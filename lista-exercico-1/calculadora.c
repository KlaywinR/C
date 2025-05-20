#include <stdio.h>

int main(void) {
    // Crie uma calculadora que receba 2 números reais e um símbolo que representa a operação desejada.
    // Operações suportadas: +, -, *, /
    // O resultado da operação deve ser apresentado no final do programa.
    // Utilize switch.

    double num1, num2;
    char operador;

    printf("Digite o primeiro número aqui > ");
    scanf("%lf", &num1);

    printf("Digite o segundo número aqui > ");
    scanf("%lf", &num2);

    printf("Digite o operador desejado (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            printf("Resultado: %.2lf\n", num1 + num2);
            break;

        case '-':
            printf("Resultado: %.2lf\n", num1 - num2);
            break;

        case '*':
            printf("Resultado: %.2lf\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0) {
                printf("Resultado: %.2lf\n", num1 / num2);
            } else {
                printf("Erro: divisão por 0 não é permitida.\n");
            }
            break;

        default:
            printf("Operador inválido. Use +, -, * ou /.\n");
    }

    return 0;
}