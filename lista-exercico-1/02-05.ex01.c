#include <stdio.h>

int main(void){
    int x, y, soma_pares = 0, mult_impares = 1;
    
    printf("DIGITE AQUI O VALOR DE X (menor): ");
     scanf("%d", &x);

     printf("DIGITE AQUI O VALOR DE Y (maior): ");
     scanf("%d", &y);

      if( x >= y){

    printf("\n\nErro: o número x deve ser menor que Y.");

      } else{
       for (int i = x; i <= y; i++){
        if (i % 2 == 0){
            soma_pares += i;
        } else {
            mult_impares *=i;
        }
       }      
 
        printf("\nA soma dos numeros pares do intervalo [%d, %d] é: %d\n", x, y, soma_pares);
        printf("A multiplicação dos números ímpares no intervalo [%d, %d] é: %d\n", x, y, mult_impares);
      }

    return 0;
}