#include <stdio.h>

int main(void)
{

  // crie um programa que some os numeros pares entre 10 e 16
  int n = 10;
  int somatorio = 0; // soma os numeros cumulativamente ( soma de numeros pares)

  while (n <= 16){
if (n % 2 == 0)
  {
    // se o numero for par  (somatório do numero!)
    somatorio = somatorio + n;

    n = n + 1;
  }




    
  }

    printf("\n * o somatorio é : %i", somatorio);
  
  return 0;
}
