#include <stdio.h>
int main(void)
{
  int inteiros[5];
  int soma = 0;
  for (int i = 0; i < 5; i++)
  {
    printf(" DIGITE O NUMERO QUE VOCE DESEJA SOMAR %d: ", i + 1);
    scanf("%d", &inteiros[i]);
    soma += inteiros[i];
  }

  printf(" A SOMA DOS NUMEROS QUE VOCE DIGITOU EH:%d\n ", soma);

  return 0;
}
