#include <stdio.h>
int main(void){

   //comando for
  // for (size_t i = 0; i < count; i++)
   //{
    /* code */
   //}
   
   // primeiro elemento: declaração de variaveis, vao mudando conforme o laço de repeticao.
   // segundo elemento: condicao. 
  // terceiro elemento: comando executados no final de cada laço. (tem decremento ou incremento).
  // nao e obrigatorio preencher todos, mas nao é comum!
    

     ///////  ##########  EXEMPLO DE TABUADA ######## ///////

     int numero;
     printf("\n----> DIGITE UM NUMERO: \n");
     scanf("%i", &numero);

     // exibir a tabuada!
    // int n = 0 --> variavel de controle!
    // n++ = serve para aumentar de 1 em 1.

     for( int n = 0; n <= 10; n++){
     printf("\n%i x %i  = %i  \n", numero, n, numero * n );

     }


     printf(" OBRIGADO POR USAR A NOSSA CALCULADORA!");
}
