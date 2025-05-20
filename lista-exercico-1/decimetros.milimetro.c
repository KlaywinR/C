#include <stdio.h>
int main(void){


float metros;  // usado  para numeros com casas decimais

printf("\n\n DIGITE O VALOR EM METROS AQUI -->\n\n");  // entrada de dados
scanf("%f", &metros);    // saída de dados

 // parte de conversoes de medidas:
  float decimetros = metros * 10;
  float milimetros = metros * 1000;    // converte de milimetros p metros.
  float centimetros = metros * 100;

  printf("\n\n|-----CONVERSÕES-----|\n\n");
   printf("%.2f metros %.2f decímetros\n", metros, decimetros);
   printf("%.2f metros = %.2f decímetros\n", metros, milimetros);
   printf("%.2f metros = %.2f decímetros\n", metros, centimetros);

    return 0;
}