#include <stdio.h>
int main()
{
    int linhas, colunas;
    int Matriz_A[10][10], Matriz_B[10][10], Matriz_C[10][10];
    printf("\nSEJA BEM VINDO AH SOMA DE MATRIZES EM LINGUAGEM C\n");
    printf("\nDIGITE A QUANTIDADE DE LINHAS DA SUA MATRIZ:  \n");
    scanf("%d", &linhas);
    printf("\nDIGITE  QUANTIDADE DE COLUNAS DA SUA MATRIZ:  \n");
    scanf("%d", &colunas);

    printf("\n--------------------------------------------------\n");
    printf("DIGITE OS ELEMENTOS DA MATRIZ A");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("A MATRIZ A:[%d][%d]", i, j);
            scanf("%d", &Matriz_A[i][j]);
        }
    }
    printf("\n DIGITE OS ELEMENTOS DA MATRIZ B\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("A MATRIZ B:[%d][%d]", i, j);
            scanf("%d", &Matriz_B[i][j]);
        }
    }
    printf("\nSOMANDO OS ELEMENTOS DA MATRIZ A COM OS ELEMENTOS DA MATRIZ B. \n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            Matriz_C[i][j] = Matriz_A[i][j] + Matriz_B[i][j];
        }
    }
    printf("\n EXIBINDO A MATRIZ A \n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", Matriz_A[i][j]);
        }
        printf("\n\n");
    }
    printf("\nEXIBINDO A MATRIZ B ------\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", Matriz_B[i][j]);
        }
        printf("\n\n");
    }
    printf("\n------EXIBINDO A MATRIZ C (A + B) ------\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", Matriz_C[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}