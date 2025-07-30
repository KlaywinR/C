/*
Receba um número do usuário e em seguida printe na tela, utilizando uma
estrutura de repetição, o seguinte formato:
NÚMERO x 1 = RESULTADO
NÚMERO x 2 = RESULTADO
...
NÚMERO x 10 = RESULTADO
No local de NÚMERO deve aparecer o valor digitado pelo usuário

*/
#define N_MAX 10
#include <stdio.h>
int main()
{

    int numero;
    printf("DIGITE UM NUMERO INTEIR0 :     ");
    scanf("%i", &numero);

    for (int i = 1; i < N_MAX; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * 10);
    }

    return 0;
}