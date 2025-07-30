#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arquivo = NULL; // ponteiro nulo

    arquivo = fopen("teste_escrita.txt", "w");
    int n_cidades = 5;

    if (arquivo != NULL)
    {
        printf(" ** Arquivo aberto com sucesso!");
        // operacoes
        fprintf(arquivo, "%s", "Meu primeiro arquivo de texto");
        fprintf(arquivo, "\n%i", n_cidades);

        char cidades[][40] = {"Serrinha", "Monte Alegre", "Nova Cruz",
                              "Montanhas", "Santo Antonio"};

        for (int i = 0; i < n_cidades; i++)
        {
            fprintf(arquivo, "\n%s", cidades[i]);
        }

        float A[3][3];

        fprintf(arquivo, "\n");

        printf("\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("A[%i][%i]: ", i, j);
                scanf("%f", &A[i][j]);
                fprintf(arquivo, "%.2f", A[i][j]);

                if (j != 2)
                {
                    fprintf(arquivo, ";");
                }
            }
            if (i != 2)
            {
                fprintf(arquivo, "\n");
            }
        }

        fclose(arquivo);
    }

    return 0;
}