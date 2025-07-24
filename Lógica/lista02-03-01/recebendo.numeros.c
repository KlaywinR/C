#include <stdio.h>
int main()
{

    int num1 = 10, num2 = 5 , num3 = 5;
     
   int soma = num1 + num2 + num3;  
   int multiplicacao = num1 * num2 * num3;
    float divisao = (float) num1 / num2;
    int resto = num1 % num2 % num3;
   int subtracao = num1 - num2;



   printf("\nA SOMA EH: %i\n", soma);
   printf("\nA Multiplicacao EH: %i\n", multiplicacao);
   printf("\nA DIVISAO EH: %i\n", (float)divisao);
   printf("\no resto eh: %i\n", resto);
   printf("\nA SUBTRACAO de NUM1 - num2 eh: %i\n", subtracao);
   
    
  




    return 0;
}