
#include <stdio.h>
#include <math.h>

int main(void)
{
   double nota1, nota2;

   printf("\n INSIRA AS media 01 --->");
   scanf("%lf", &nota1);

   printf("\n INSIRA A media 02 --->");
   scanf("%lf", &nota2);

   double media = (nota1 + nota2) / 2;

   if (media >= 7.0)
   {
      printf("APROVADO");
   }
   else
   {
      if (media < 4.0)
      {
         printf("reprovado");
      }
      else
      {
         printf(" PROVA FINAL");
      }
   }

   printf("MEDIA: %2.lf", media);

   return 0;
}