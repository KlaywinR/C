#include <stdio.h>
int main()
{

   char nome[600];
   float altura;

   printf(" DIGITE SEU NOME: ");
   scanf(" %[^\n]", nome);

   printf("DIGITE SUA ALTURA:");
   scanf("%f", &altura);

   printf("EU NOME EH: %s\n", nome);
   scanf(" %[^\n]", nome);
   printf("SUA altura EH: %f\n", altura);
   scanf("%f", &altura);

   return 0;
}