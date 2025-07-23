 
 
 /*
 Desenvolva um programa estruturado em funções para cadastrar um conjunto de alunos que possuem as seguintes informações: 
 matrícula, nome, idade, nota1 e nota2. O seu programa além de realizar o cadastro dos alunos, deve permitir a exibição das informações 
 de um aluno específico, o relatório de informações de todos os alunos, modificar os valores das notas 1 e 2 de um determinado aluno,
calcular a média de um dado aluno, exibir a média de todos os alunos da turma

 */
 #include <stdio.h>
#include <string.h>

typedef struct {
    int idade, matricula_do_aluno;
    float nota1, nota2;
    char nome_do_aluno[100];
} ALUNO;

//  cadastrar todos os alunos
void cadastrar_alunos(ALUNO alunos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- CADASTRO DO ALUNO %d ---\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome_do_aluno);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula_do_aluno);

        printf("Idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }
}

// mostra todos os alunos
void listar_alunos(ALUNO alunos[], int n) {
    printf("\n--- LISTA DE ALUNOS ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome_do_aluno);
        printf("Matrícula: %d\n", alunos[i].matricula_do_aluno);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota 1: %.2f\n", alunos[i].nota1);
        printf("Nota 2: %.2f\n", alunos[i].nota2);
        printf("Média: %.2f\n", (alunos[i].nota1 + alunos[i].nota2) / 2);
    }
}

// Exibindo o aluno pela matrícula
void exibir_aluno(ALUNO alunos[], int n, int matricula) {
    for (int i = 0; i < n; i++) {
        if (alunos[i].matricula_do_aluno == matricula) {
            printf("\n--- DADOS DO ALUNO ---\n");
            printf("Nome: %s\n", alunos[i].nome_do_aluno);
            printf("Matrícula: %d\n", alunos[i].matricula_do_aluno);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Nota 1: %.2f\n", alunos[i].nota1);
            printf("Nota 2: %.2f\n", alunos[i].nota2);
            printf("Média: %.2f\n", (alunos[i].nota1 + alunos[i].nota2) / 2);
            return;
        }
    }
    printf("\nAluno não encontrado!\n");
}

// alterando as notas de um aluno 
void alterar_notas(ALUNO alunos[], int n, int matricula) {
    for (int i = 0; i < n; i++) {
        if (alunos[i].matricula_do_aluno == matricula) {
            printf("\nDigite a nova Nota 1: ");
            scanf("%f", &alunos[i].nota1);
            printf("Digite a nova Nota 2: ");
            scanf("%f", &alunos[i].nota2);
            printf("Notas alteradas com sucesso!\n");
            return;
        }
    }
    printf("\nAluno não encontrado!\n");
}

// Exibe a média de todos os alunos
void exibir_media_turma(ALUNO alunos[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += (alunos[i].nota1 + alunos[i].nota2) / 2;
    }
    printf("\nMédia da turma: %.2f\n", soma / n);
}

int main() {
    int n;
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);
    ALUNO alunos[n];

    cadastrar_alunos(alunos, n);

    int opcao, matricula;
    do {
        printf("\n--- MENU ---\n");
        printf("1 - Listar todos os alunos\n");
        printf("2 - Exibir aluno por matrícula\n");
        printf("3 - Alterar notas de um aluno\n");
        printf("4 - Exibir média da turma\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                listar_alunos(alunos, n);
                break;
            case 2:
                printf("\nDigite a matrícula do aluno: ");
                scanf("%d", &matricula);
                exibir_aluno(alunos, n, matricula);
                break;
            case 3:
                printf("\nDigite a matrícula do aluno: ");
                scanf("%d", &matricula);
                alterar_notas(alunos, n, matricula);
                break;
            case 4:
                exibir_media_turma(alunos, n);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
