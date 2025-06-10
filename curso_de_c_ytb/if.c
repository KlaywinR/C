#include <stdio.h>
int main(void){
   float nota1, nota2;
   

   /*
   programa que le duas notas e fala se esta aprovado ou nao */

   printf(" digite a sua primeira nota da prova:");
   scanf("%f", &nota1);
   printf(" digite a sua segunda nota da prova");
   scanf("%f", &nota2);

   if (nota1 >= 7.5)
   {
    printf("\nNA PRIMEIRA PROVA: ESTA APROVADO!");
   } else
   {
     printf("\nNA PRIMEIRA PROVA!\n");
   } if (nota2 >= 8.6)
   {
    printf("\nNA SEGUNDA PROVA: PARABENS, VOCE PASSOU!\n");
   } else
   {
    nota2 < 8.6;
    printf("\nNA SEGUNDA PROVA: VOCE NAO PASSOU!\n");

   }
   
   
   
   










    return 0;
}