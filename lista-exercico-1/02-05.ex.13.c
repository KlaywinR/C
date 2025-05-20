#include <stdio.h>
#include <math.h> 
int main(void){

  float a, b, c;
  double x1, x2; // Declare x1 and x2 here
   
    printf("\n\n\nDigite o valor de A: \n\n\n");
    scanf("%f", &a );                                    // entrada de dados

    printf("\n\n\nDigite o valor de B: \n\n\n");         // entrada de dados
    scanf("%lf", &b );

    printf("\n\n\nDigite o valor de C: \n\n\n");
    scanf("%lf", &c);

   if ( a == 0) {
    printf("\n\nNAO É EQUACAO DE SEGUNDO GRAU\n\n");
   } else {
   
    double delta = pow(b, 2) - 4 * a * c;    // calculando o delta da função quadrática!
 
    if (delta > 0){
        double x1 = (-b + sqrt(delta)) / (2 * a);
       
       
        double x2 = (-b -  sqrt(delta)) / (2 * a);
    }
    }

    printf ("raizes da equacao");
    printf("\n\n #x1: %2.lf", x1);
    printf("\n\n #x1: %2.lf", x2);

    return 0; 
}