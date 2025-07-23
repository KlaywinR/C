#include <stdio.h>
#include <string.h>
#define N_max 2

struct FUNCIONARIOS
{
    char nome_do_FUNCIONARIO[100];
    float altura;
    int idade;
    float peso;
    int rg, cpf, numero_da_rua;
    char nome_da_rua[1000];
    char raca[100], sexo[1];
};

void cadastrar_funcionarios(struct FUNCIONARIOS *funcionario)
{
    puts("SEU NOME: ");
    scanf(" %[^\n]", funcionario->nome_do_FUNCIONARIO);

    puts("SUA ALTURA: ");
    scanf("%f", &funcionario->altura);

    puts("SUA IDADE: ");
    scanf("%d", &funcionario->idade);

    puts("DIGITE O SEU PESO: ");
    scanf("%f", &funcionario->peso);

    puts("DIGITE O SEU CPF:   ");
    scanf("%d", &funcionario->cpf);

    puts("DIGITE O NUMERO DA SUA RG:   ");
    scanf("%d", &funcionario->rg);

    puts("DIGITE O NUMERO DA SUA RUA:  ");
    scanf("%d", &funcionario->numero_da_rua);

    puts("DIGITE O NOME DA SUA RUA: ");
    scanf(" %[^\n]", &funcionario->nome_da_rua);

    puts("DIGITE A SUA RACA");
    scanf(" %[^\n]", &funcionario->raca);

    puts("DIGITE O SEU SEXO: |M| PARA MASCULINO E |F| PARA FEMININO");
    scanf(" %[^\n]", &funcionario->sexo);
}

void mostrarFuncionario(struct FUNCIONARIOS *funcionarios)
{
    puts("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
    puts("--------DADOS COLETADOS--------");
    printf("\nNOME: %s\n", funcionarios->nome_do_FUNCIONARIO);
    printf("\nALTURA: %f\n", funcionarios->altura);
    printf("\nIDADE: %d", funcionarios->idade);
    printf("\nPESO TOTAL: %d", funcionarios->peso);
    printf("\nCPF: %i", funcionarios->cpf);
    printf("\nREGISTRO GERAL (RG): %i", funcionarios->rg);
    printf("\nNUMERO DA RUA QUE RESIDE: %d", funcionarios->numero_da_rua);
    printf("\nNOME DA RUA QUE RESIDE: %s\n", funcionarios->nome_da_rua);
    printf("\nRACA: %s\n", funcionarios->raca);
    printf("\nSEXO: %s\n", funcionarios->sexo);
    puts("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
} 






int main() {
    struct FUNCIONARIOS FUNCIONARIOS [N_max]; // vetor de alunos
    int quantidade, i;

    printf("QUANTOS FUNCIONARIOS VOCE DESEJA CADASTRAR? ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++)
    {
        printf("CADASTRANDO FUNCIONARIO | %i | ", i + 1);
        cadastrar_funcionarios(&FUNCIONARIOS[i]);

    }
      puts("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        printf("\n=== LISTA DE FUNCIONARIOS CADASTRADOS ===\n");
    for (i = 0; i < quantidade; i++) {
        mostrarFuncionario(&FUNCIONARIOS[i]);
    }
    puts("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");

    return 0;
}

    
