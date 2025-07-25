#include <stdio.h>

int main(void)
{
  //////////////ANOTAÇÕES DE OPERADORES LÓGICOS/////////////////////////

  //>maior
  //<menor
  //>= maior ou igual
  //<= menor ou igual
  //=! diferente
  //->sempre em uma operacao relacional o resultado e 0 ou 1.
  //-> 0 é falso ; 1 é verdadeiro.

  // OPERADORES LÓGICOS//
  // e ou and, | e comercial &
  // ou, or    | barras horizontais
  //  não, not |  !
  //  possuem valores logicos; verdadeiros ou falsos; falso 0 e verdadeiro qualquer valor diferente de 0.
  //  o operador logico semppre trabalhará com  valores logicos.
  //  EX: int a, b,
  //  E, AND = a&&b ---> quando a for falso e b for falso; a&&b é falso também
  //   O OPERADOR LOGICO SO DÁ VERDADEIRO QUANDO TODOS OS SEUS OPERADORES FOREM VERDADEIROS!!

  /// operador ou , or ////
  //---> a||b
  // O OPERADOR LOGICO SO DÁ VERDADEIRO QUANDO TODOS OS SEUS OPERADORES FOREM VERDADEIRO
  // para que seja verdadeiro ao menos 1 operando deve ser verdadeiro.

  ///  OPERADOR NOT ///
  //--> !a = inverte o sentido lógico do operando
  // se A for falso, ele será verdadeiro depois. Sendo assim, se B for falso, ele será verdadeiro depois.

  int num1 = 10, num2 = 20, num3 = -5;
  printf("num1 == num2: %i", num1 == num2);
  printf(" --num3 > 0: %i", num3 > 0);

  printf("\n --num2 >= num3: %i", num2 >= num3);

  return 0;
};
