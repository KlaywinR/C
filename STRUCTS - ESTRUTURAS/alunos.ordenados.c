#include <stdio.h>
#include <stdlib.h>
#define MAX_ALUNOS 2
#include <string.h>
#include <locale.h>
struct cadastro
{
    char nome[50];
    int numero_matricula;
    float media_final;
    int numero_de_alunos;
};
int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    float media_final;
    struct cadastro alunos[MAX_ALUNOS];
    int numero_alunos;
    puts("DIGITE o numero de aluno que voce deve cadastrar");
    scanf("%i", &numero_alunos);

    if (numero_alunos > 0 && numero_alunos <= MAX_ALUNOS)
    {
        puts("O NUMERO DE ALUNOS EH VALIDO");
        for (int i = 0; i < numero_alunos; i++)
        {
            printf("-----> ALUNO %i\n", i + 1);
            puts("NOME: ");
            scanf("%s", alunos[i].nome);
            puts("MATRICULA DO ALUNO:");
            scanf("%i", &alunos[i].numero_matricula);

            puts(" A MEDIA FINAKL EH DE:");
            scanf("%.2f", &alunos[i].media_final);
        }
        struct cadastro aux;

        for (int i = 0; i < numero_alunos - 1; i++)
        {
            for (int j = i + 1; j < numero_alunos; j++)
            {
                if (alunos[i].media_final > alunos[j].media_final)
                {
                    float aux_media = alunos[i].media_final;
                    alunos[i].media_final = alunos[j].media_final;
                    alunos[j].media_final = aux_media;

                    int aux_matricula = alunos[i].numero_matricula;
                    alunos[i].numero_matricula = alunos[j].numero_matricula;
                    alunos[j].numero_matricula = aux_matricula;

                    char aux_nome[50];
                    strcpy(aux_nome, alunos[i].nome);
                    strcpy(alunos[i].nome, alunos[j].nome);
                    strcpy(alunos[j].nome, aux_nome);
                }
            }
        }

        puts("\nCADASTRO GERAL DE ALUNOS\n");
        for (int i = 0; i < numero_alunos; i++)
        {
            printf("\n-- > Matricula    : %i\n", alunos[i].numero_matricula);
            printf("\n-- > Nome         : %s\n", alunos[i].nome);
            printf("\n-- > Media Final  : %f\n", alunos[i].media_final);
            printf("\n-- > Status Final : %s\n", alunos[i].media_final >= 6.0 ? "APROVADO" : "REPROVADO");
            puts("\n----------------------------------------------------------\n");
        }
    }
    else
    {
        puts("Desculpe! O número que você digitou é inválido");
        return 1;
    };

    

    return 0;
}