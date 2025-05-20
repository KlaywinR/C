#include <stdio.h>
int main(){
  double f = 98.6;
double c = (f - 32.0) * (5.0 / 9.0);

  printf("\n\nDigite a temperatura em Fahrenheit\n\n");
  scanf("%lf", &f);
   c = (f - 32.0) * (5.0 / 9.0);
    printf("Temperatura em Celsius: %.2f\n",c); // NO FINAL A VARIAVEL C É CHAMADA PARA SER ATRIBUIDA O VALOR FINAL.

//objetivo do sotfware: converter temperaturas na escala Fahrenheit.






    return 0;
}