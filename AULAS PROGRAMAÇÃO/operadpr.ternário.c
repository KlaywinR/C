// o operador ternário se caracteria com "? : "
// possui 3 operandos
// ESTRUTURA :  condicao ? codigo : codigo;

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("informe o  primeiro número");
    scanf("%i", &num1);

    printf("informe o  primeiro número");
    scanf("%i", &num2);

    if (num1 > num2)
    {
        printf("num1 >= num2");
    }
    else
    {
        printf("num1 >= num2");
    }

    printf("\n\n TRABALHANDO COM OPERADOR TERNÁRIO\n\n");
    num1 >= num2 ? printf("num1 >= num2") : printf("num1 < num2");

    int resultado;
    resultado = num1 >= num2 ? num1 - num1 + num2 : num2 - num2 + num1;

    printf("\n\n resultdo é %i", resultado);

    return 0;
}