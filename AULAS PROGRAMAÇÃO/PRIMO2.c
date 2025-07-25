#include <stdio.h>
int main(void){

  
    int cont;
   int numero;
   printf("----> DIGITE UM NUMERO QUALQUER: ");
    scanf("%i", &numero);

      // olhando se  é primo!
      
    cont = 0;
    for (int i = 2; i < numero; i = i + 1 ){
        if (numero % i == 0){
            printf("o numero %i nao e primo", numero);
            return 0; // se nao for primo, finaliza aqui mesmo!
        }
       
    }
    
     printf("o numero %i eh primo sim! ", numero);
   

    return 0;
}