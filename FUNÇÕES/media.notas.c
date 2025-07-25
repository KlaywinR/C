#include <stdio.h>
int media_notas(float nota01, float nota02, float nota03, float nota04, float nota05)
{
    int resultado_geral = (nota01 + nota02 + nota03 + nota04 + nota05) / 5;
    return resultado_geral;
}
#define N_MAX_ALUNOS 2
int main()
{

    float nota01, nota02, nota03, nota04, nota05, resultado;
    for (int i = 0; i < N_MAX_ALUNOS; i++)
    {
        puts("\n-----------------------------------\n");
        printf("ALUNO %d\n", i + 1);
        puts("\nDIGITE A PRIMEIRA NOTA DO ALUNO ---->:   \n");
        scanf("%f", &nota01);
        puts("\nDIGITE A SEGUNDA NOTA DO ALUNO ----->:     \n");
        scanf("%f", &nota02);
        puts("\nDIGITE A TERCEIRA NOTA DO ALUNO ---->:    \n");
        scanf("%f", &nota03);
        puts("\nDIGITE A QUARTA NOTA DO ALUNO ---->:      \n");
        scanf("%f", &nota04);
        puts("\nDIGITE A QUINTA NOTA DO ALUNO ---->:      \n");
        scanf("%f", &nota05);

        resultado = media_notas(nota01, nota02, nota03, nota04, nota05);
        puts("\n");
        puts("\n--------------------------------------\n");
        printf("A MEDIA GERAL DO ALUNO |%d| EH: %2.f\n", i + 1, resultado);
    }

    return 0;
}