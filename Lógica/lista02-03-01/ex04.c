#include <stdio.h>
int main()
{

    int num2, num1, num3, num4;

    num3 = (num2 + num1 + num4) / 3;

    printf("DIGITE O PRIMEIRO NUMERO: ");
    scanf("%i", &num1);
    printf("DIGITE O SEGUNDO NUMERO: ");
    scanf("%i", &num2);
    printf("DIGITE O TERCEIRO NUMERO: ");
    scanf("%i", &num4);

    printf("A MEDIA DESSES DOIS NUMEROS EH: %.2f", num3);

    

    return 0;
}