#include <stdio.h>
#define N_ALUNOS 10

int main() {
    int idade[N_ALUNOS];
    int nota1[N_ALUNOS], nota2[N_ALUNOS], nota3[N_ALUNOS], numero_matricula[N_ALUNOS];
    float media_do_aluno[N_ALUNOS];
    char nome_do_aluno[N_ALUNOS][100];

    printf("\nSEJA BEM-VINDO AO SISEDU!\n");

    for (int i = 0; i < N_ALUNOS; i++) {
        printf("\n--- CADASTRO DO ALUNO %d ---\n", i + 1);

        printf("Digite o nome do aluno: ");
        scanf(" %99s", nome_do_aluno[i]);

        printf("Digite a idade do aluno: ");
        scanf("%d", &idade[i]);

        if (idade[i] < 18) {
            printf("IDADE INVÁLIDA PARA CADASTRO!\n");
            continue; // Não preenche notas e matrícula
        }

        printf("Digite a matrícula do aluno: ");
        scanf("%d", &numero_matricula[i]);

        printf("Digite a primeira nota: ");
        scanf("%d", &nota1[i]);
        printf("Digite a segunda nota: ");
        scanf("%d", &nota2[i]);
        printf("Digite a terceira nota: ");
        scanf("%d", &nota3[i]);

        media_do_aluno[i] = (nota1[i] + nota2[i] + nota3[i]) / 3.0;
    }

    printf("\n--- RESULTADOS DO CADASTRO ---\n");
    for (int i = 0; i < N_ALUNOS; i++) {
        if (idade[i] < 18) continue;  // Ignora quem não foi cadastrado

        int soma = nota1[i] + nota2[i] + nota3[i];

        printf("\n---------------------\n");
        printf("Aluno: %s\n", nome_do_aluno[i]);
        printf("Matrícula: %d\n", numero_matricula[i]);
        printf("Soma das notas: %d\n", soma);
        printf("Média: %.2f\n", media_do_aluno[i]);

        if (media_do_aluno[i] >= 7.0)  // Usei 7.0 como padrão
            printf("Status: APROVADO\n");
        else
            printf("Status: REPROVADO\n");

        printf("---------------------\n");
    }

    return 0;
}
