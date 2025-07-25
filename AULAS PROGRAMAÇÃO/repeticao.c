#include <stdio.h>
int main(void){
  
     int contador_positivo = 0;
     int contador_negativo = 0;
     int somatorio = 0;
     int numero = 1;



    while (numero != 0) // para saber se o numero é diferente de zero!
    {
         printf("digite um numero (0 para sair do programa)");
     scanf("%i", &numero);   

      if (numero > 0)
      {
         contador_positivo++;
      } else if (numero < 0){
        contador_negativo++;
      }
      

        somatorio = somatorio + numero;
    }
    
   printf("\n # numeros positivos: %i",  contador_positivo );
     printf("\n # numeros negativos: %i",  contador_negativo );
        printf("\n # numeros negativos: %i",  somatorio );
      

    return 0;
}



