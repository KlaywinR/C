#include <stdio.h>
int main(void)
{

  float peso;
  int idade;
  char cor_da_pele[13];

  printf("digite a sua idade: ");
  scanf("%i", &idade);
  printf("digite o seu peso: ");
  scanf("%f", &peso);
  printf("digite a sua cor de pele : ");
  scanf(" %[^\n]", cor_da_pele);

  printf("\n ################ dados obtidos ###########\n");
  printf(" a sua idade eh: %i\n", idade);
  printf(" o seu peso eh %f\n", peso);
  printf("a sua cor de pele eh : %s.\n", cor_da_pele);

  return 0;
}