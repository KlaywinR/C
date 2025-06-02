#include <stdio.h>
int main(void){


    int cont;
   int numero;
   printf("----> DIGITE UM NUMERO QUALQUER: ");
    scanf("%i", &numero);

      // olhando se  é primo!
    cont = 0;
    for (int i = 1; i <= numero; i = i + 1 ){
        if (numero % i == 0)
        {
            cont++;
        }
    }
    // cont : variavel contador!
    if ( cont == 2)
    {
        printf("o numero %i eh primo! ", numero);

    } else {
        printf(" o numero %i nao e primo", numero);

    }

    return 0;
}