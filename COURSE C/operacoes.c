#include <stdio.h>
int main(void)
{
  int a, b, c, soma, multiplicao, divisao, adicao, subtracao;
  printf(" DIGITE O PRIMEIRO NUMERO : ");
  scanf("%i", &a);
  printf("DIGITE O SEGUNDO NUMERO");
  scanf(" %i", &b);
  soma = a + b;
  multiplicao = a * b;
  divisao = a / b;
  subtracao = a - b;

  printf(" ## TODOS OS RESULTADOS ##");
  printf("EM SOMA: %d\n", soma);
  printf("EM MULTIPLICACAO: %d\n", multiplicao);
  printf("EM DIVISAO: %d\n", divisao);
  printf("EM SUBTRACAO: %d\n", subtracao);

  return 0;
}