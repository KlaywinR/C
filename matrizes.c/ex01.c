#include <stdio.h>
int main (){
   int num_linhas_a, num_colunas_a , num_linhas_b, num_colunas_b;
   printf("DIGITE O NUMERO DE LINHAS e COLUNAS DA MATRIZ  A :\n");
   scanf("%i %i", &num_linhas_a, &num_colunas_a);
   printf("DIGITE O NUMERO DE linhas E COLUNAS DA MATRIZ B :\n");
   scanf("%i %i", &num_colunas_b, &num_linhas_b);
   if (num_linhas_a == num_linhas_b && num_colunas_a == num_colunas_b)
   {
        int matrizA[num_colunas_a][num_linhas_a];
          int matrizB[num_colunas_b][num_linhas_b];
    int matrizC[num_colunas_b][num_linhas_b];
    printf("====PREENCHENDO MATRIZ A====\n");
   for (int i = 0; i < num_linhas_a; i++)
   {
    for (int j = 0; j < num_colunas_a; j++)
    {
         printf("Matriz A: [%i][%i]", i, j);
         scanf("%i", &matrizA[i][j]);
        
    }
   } 
    printf("====PREENCHENDO A MATRIZ  B====\n");
    for (int i = 0; i < num_linhas_a; i++)
    {
        for (int j = 0; j < num_colunas_b; j++)
        {
            printf("Matriz B: [%i][%i]", i, j);
            scanf("%i", &matrizB[i][j]);
        
        }
        
    } 
    printf(" ADICAO MATRICIAL");
      for (int i = 0; i < num_linhas_a; i++)
    {
        for (int j = 0; j < num_colunas_a; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf(" MatrizC[%d][%d] = %d\n", i, j, matrizC[i][j]);
        }
    }  
    printf("\n");
    
           

   } else {
    printf("ERRO: AS MATRIZES DEVEM TER A MESMA DIMENSAO!!!");
   } 
    


    return 0;
}