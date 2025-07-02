#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 1
#include <string.h>
typedef struct lista_pacientes
{
    int idade, telefone;
    float altura, peso;
    char nome[30], sexo[100], estado_civil[40], naturalidade[100], nacionalidade[100], endereco[200];
};
int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    struct lista_pacientes pacientes[TAM];
    for (int i = 0; i < TAM; i++)
    {
        printf("\n-----| INSIRA OS DADOS %d\n |-----\n", i + 1);
        puts("DEFINA O SEU NOME COMPLETO:");
        scanf("% [^\n]s", &pacientes[i].nome);
        fflush(stdin);
        puts("DIGITE O SEU ESTAD0 CIVIL:");
        scanf("% [^\n]s", &pacientes[i].estado_civil);
        fflush(stdin);
        puts("DIGITE A SUA NATURALIDADE:");
        scanf("% [^\n]s", &pacientes[i].naturalidade);
        fflush(stdin);
        puts("DIGITE A SUA NACIONALIDADE:");
        scanf(" %[^\n]s", &pacientes[i].nacionalidade);
        fflush(stdin);

        puts("DIGITE O SEU ENDEREÇO:");
        scanf("% [^\n]", &pacientes[i].endereco);

        printf("DIGITE O SEU TELEFONE CELULAR:  ");
        scanf("%i", &pacientes[i].telefone);
        puts("IDADE: ");
        scanf("%i", &pacientes[i].idade);
        puts("ALTURA: ");
        scanf("%f", &pacientes[i].altura);
        puts("PESo: ");
        scanf("%f", &pacientes[i].peso);
    }
    system("cls");

    printf("\nOS DADOS OBTIDOS FORAM:\n");
    for (int i = 0; i < TAM; i++)
    {
        puts("\n============================================\n");
        printf("\n----- PESSOA DE NUMERO %d ------\n", i + 1);
        printf("\nA IDADE: %d\n", pacientes[i].idade);
        printf("\nA ALTURA: %.2f", pacientes[i].altura);
        printf("\nNOME COMPLETO: %s\n", pacientes[i].nome);
        printf("\nO PESO: %.2f", pacientes[i].peso);
        printf("\nO ESTADO CIVIL: %s\n", pacientes[i].estado_civil);
        printf("\n A NATURALIDADE: %s\n", pacientes[i].naturalidade);
        printf("\nO ESTADO CIVIL: %s\n", pacientes[i].estado_civil);
        printf("\nA NACIONALIDADE: %s\n", pacientes[i].nacionalidade);
        printf("\nO ENDEREÇO: %s\n", pacientes[i].endereco);
    }
    puts("\n============================================\n");

    return 0;
}