#include <stdio.h>
int main(){

    int n_linhas, n_colunas;
 int matriz[n_linhas] [n_colunas]; // para determinar uma matriz!

 printf("digite o numero de linhas que vc deseja:");
 scanf("%i", &n_linhas);

  printf("digite o numero de colunas que vc deseja:");
 scanf("%i", &n_colunas);

 if (n_linhas > 0 && n_colunas > 0)
 { 
     for (int i = 0; i < n_linhas ; i++)
     {
        for (int j = 0; j < n_colunas; j++)
        {
            matriz[i][j] = 0;
            printf("%i ",matriz[i][j]);
        }
         printf("\n");
     }
     
 }
 


/*

 -> cada posicao na matriz é um endereço de memoria
 -> 
 */
   


    return 0;
}