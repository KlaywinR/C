#include <stdio.h>
int multiplicacao(int numero01, int numero02, int numero03)
{
    int resultado = numero01 * numero02 * numero03;
    return resultado;
}
/*
 OBSERVAÇÃO GERAL:
 --> o tipo da função é inteiro.
 --> o nome da função é multiplicação.
 --> os parâmetros são int numero01, numero02 e numero03.
*/
int main()
{
    int numero01, numero02, numero03, resultado;
    puts("DIGITE O PRIMEIRO NUMERO QUE VC DESEJA MULTIPLICAR:");
    scanf("%d", &numero01);
    puts("DIGITE O SEGUNDO NUMERO QUE VOCE DESEJA MULTIPLICAR:");
    scanf("%d", &numero02);
    puts("DIGITE O TERCEIRO NUMERO QUE VOCE DESEJA MULTIPLICAR");
    scanf("%d", &numero03);

    resultado = multiplicacao(numero01, numero02, numero03);

    printf("O RESULTADO EH: %d\n", resultado);

    return 0;
}