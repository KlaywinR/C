#include <stdio.h>
int main(void){

 int a, b, aux;

  printf("digite o primeiro numero");
  scanf("%i", &a);

   printf("digite o segundo numero");
  scanf("%i", &b);

  if (a > b) {
    aux = a;
    a = b;
    b = aux;
  } 
  printf(" os valores sao : %i %i", a,b);
  




    return 0;
}


// digamos q o usuario digite 10 em a ; e 3 em b.
// a é para ser menor que b
// b é para ser maior que a
// normalmente, se usa uma variavel AUXILIAR (aux).
// aux = b;
// para troca de valores em variaveis, se usa uma variavel AUXILIAR.
// chamado de swap.