#include <stdio.h>
#define MAX_ALUNOS 2
struct cadastro
{
    char nome[50];
    int numero_matricula;
    float media_final;
    int numero_de_alunos;
};

int main()
{
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
            scanf("%s", &alunos[i].nome);
            puts("MATRICULA DO ALUNO:");
            scanf("%i", &alunos[i].numero_matricula);

            puts(" A MEDIA FINAKL EH DE:");
            scanf("%f", alunos[i].media_final);
        }

        puts("ALUNOS CADASTRADOS AO TODO");
        for (int i = 0; i < numero_alunos; i++)
        {
            printf("Matrcicula %i", alunos[i].numero_matricula);
            printf("Nome %i", alunos[i].nome);
            printf("MEDIA FINAL %.2f", alunos[i].media_final >= 6.0 ? "APROVADO" : "REPROVADO"   );
            printf("STATUS :  %s", alunos[i].media_final >= 6.0 ? "APROVADO" : "REPROVADO");
        }
    }
    else
    {
        puts("NUMERO DE ALUNOS EH INVALIDO");
        return 1;
    };

    return 0;
}