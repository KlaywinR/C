#include <stdio.h>
int main(){
  double f_double, c_double;

  printf("\n\nDigite a temperatura em Fahrenheit\n\n");
  scanf("%lf", &f_double);
   c_double = (f_double - 32.0) * (5.0 / 9.0);
    printf("Temperatura em Celsius (double): %.2f\n", c_double);

//objetivo do sotfware: converter temperaturas na escala Fahrenheit.






    return 0;
}