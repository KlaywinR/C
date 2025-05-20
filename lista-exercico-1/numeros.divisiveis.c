#include <stdio.h>
int main(void)
{
  // crie um programa que imprime em tela todos os numeros divisiveis por 3 e por 5 entre 1 e 100.
  // NESTE PROGRAMA SE USA FOR WHILE

  int n = 1;  // o primeiro numero a ser testado!

  while (n <= 100) // menor ou igual a 100
  {
if (n % 3 == 0 && n % 5 == 0){
    
      printf("%i ", n); // Adiciona espaço para separar os números
    }
    n = n + 1;
  }
  return 0;
}