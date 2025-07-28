/**
 * Desenvolva um programa que apresente o seguinte menu:
1- SOMA
2- SUBTRAÇÃO
3- MULTIPLICAÇÃO
4- DIVISÃO
DIGITE SUA ESCOLHA
E permita o usuário digitar um número escolhendo um dos itens listados no
menu. Para cada item receba dois números e realize a operação indicada, ao final
printar na tela o resultado. Exemplo:
Se o usuário digitar 1, deve receber dois números do usuário e depois printar a
SOMA deles.
 */
#include <stdio.h>

int main()
{
  float num1, num2, resultado;
  int opcao;
  printf("\t\t\tSEJA BEM VINDO AO JOGO");
  puts("\t\nDIGITE A OPCAO QUE VC DESEJA JOGAR:\t\n");
  puts("\t\t\t[01] -> SOMA ");
  puts("\t\t\t[02] -> MULTIPLICACAO");
  puts("\t\t\t[03] -> DIVISAO");
  puts("\t\t\t[04] -> SUBTRACAO");
  puts("\t\t\tDIGITE A SUA OPCAO ESCOLHIDA");
  scanf("%i", &opcao);

  puts("\t\tDIGITE O PRIMEIRO NUMERO: -->    ");
  scanf("%f", &num1);
  puts("\t\tDIGITE O PRIMEIRO NUMERO: -->    ");
  scanf("%f", &num2);

  if (opcao == 1)
  {
    resultado = num1 + num2;
    printf("\t\tO RESULTADO EH: %d", resultado);
  }
  else if (opcao == 2)
  {
    resultado = num1 * num2;
    printf("\t\tO RESULTADO EH: %.2f", resultado);
  }
  else if (opcao == 3)
  {
    if (num2 != 0)
      resultado = num1 / num2;
    printf("\t\tO RESULTADO DA DIVISAO EH: %.2f", resultado);
  }
  else
    printf("\t\t\NAO E PERMITIDO A DIVISAO POR 0 - ZERO");

  puts("");

  return 0;
}