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
            if(cont == 3){
                break;
            }
        }
    }
    // cont : variavel contador!c
    printf("\nO VALOR EXATO DE CONT EH : -->  %i\n", cont );
    if ( cont == 2)
    {
        printf("O NUMERO QUE VOCE DIGITOU:  %i E PRIMO! ", numero);

    } else {
        printf(" O NUMERO QUE VOCE DIGITOU:%i NAO E PRIMO!", numero);

    }

    return 0;
}