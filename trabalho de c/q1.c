#include <stdio.h>
#include <math.h> 

// ALUNO : KLAYWIN RYAN AQUINO DIAS 
// QUESTÃO 01

// tive a ajuda de maicon e tiago para a resoluão das questões, pois ainda estou com deficit no entendimento do conteúdo.


int main(void){  
 
 double x, fxx, denominador_do_numero_tal; 
 
   printf("\n ---- DIGITE AQUI O  VALOR DE X ------\n");
   scanf("%lf", &x);

   if (x <= -4 || x >= 4)
   {
     denominador_do_numero_tal = ((x * x )-16);

     
     if (denominador_do_numero_tal == 0 )
     {
        printf("O denominador neste caso nao existe, pois é zero");
     } else {
        fxx = (5 * x + 3) / denominador_do_numero_tal;
        printf("%2.lf\n", x, fxx);
     }

   }
   else  {
     printf("\n ERRADO! a funcao f(x) nao existe para x : %2.lf", x);
   }
     
   


    return 0;
}