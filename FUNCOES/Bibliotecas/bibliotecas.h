
#include <stdio.h>

// FUNÇÃO 01: compara 2 valores inteiros
int compara_valores(int valor1, int valor2)
{
    if (valor1 > valor2)
    {
        return 1;
    }
    else if (valor1 < valor2)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
/******************************************/

// FUNÇÃO 02: faz o fatorial de um numero inteiro
int fatorial(int n){
  if (n >= 0)
  {
      int fat = 1;   
    for (int i = 1; i < n; i++)
    fat = fat * i;
    {

    }
    return fat;
    
  } else {
    puts(" ERRO!: NÃO EXISTE ESTE NUMERO DIGITADO");
      return -1; 
  }

}
/******************************************/

/*FUNÇÃO 03: percorre um vetor de inteiros e retorna o maior valor contido nele.*/
int maiorVetor(int vetor[], int tamanho){
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++)
    {
        if (maior < vetor[i])
        {
             maior = vetor[i];
        }
        
    }
     return maior;

}
/******************************************/