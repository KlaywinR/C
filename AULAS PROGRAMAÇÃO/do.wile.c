#include <stdio.h>
int main(void)
{
    char operador; // recebendo os operadores = + , - , / , *
    float num1, num2;
    int continuar;
    char aux;

    do {
        printf("\n-----------------------------\n");
        printf("\n ### CALCULADORA EM C ### \n");
        printf("\n-----------------------------\n");

        printf("\n +: adicao \n");
        printf("\n -: subtracao \n");
        printf("\n *: multiplicacao \n");
        printf("\n /: divisao \n");

        printf("\n-----------------------------\n");
        printf("\n DIGITE A OPERACAO DESEJADA\n");
        scanf(" %c", &operador);

        if (operador == '+' || operador == '-' || operador == '/' || operador == '*')
        {
            printf("\n ---> OPERADOR 1 :");
            scanf("%f", &num1);

            printf("\n ---> OPERADOR 2 :");
            scanf("%f", &num2);

            switch (operador)
            {
            case '+':
                // Adição do numero dado
                printf("%2.f + %2.f = %2.f\n", num1, num2, num1 + num2);
                break;

            case '-':
                // Subtração do numero dado
                printf("%2.f - %2.f = %2.f\n", num1, num2, num1 - num2);
                break;

            case '/':
                if (num2 != 0)
                {
                    printf("%2.f / %2.f = %2.f\n", num1, num2, num1 / num2);
                }
                else
                {
                    printf("Erro: Divisão por zero!\n");
                }
                break;

            case '*':
                // Multiplicação do numero dado
                printf("%2.f * %2.f = %2.f\n", num1, num2, num1 * num2);
                break;

            default:
                break;
            }
        }
        else
        {
            printf(" ERRO NO SISTEMA : Operador invalido!\n");
        }
        printf("Deseja encerrar? (0 para sair, 1 para continuar): ");
        scanf("%i", &continuar);

        // Limpa o buffer do teclado
        while ((aux = getchar()) != '\n' && aux != EOF);
    } while(continuar != 0);

    printf(" ###-------------saindo da calculadora--------------###\n");

    return 0;
}