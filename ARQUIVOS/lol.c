#define N_MAX 1
#include <stdio.h>
int main()
{
    int NUMERO;
    int idade;
    float peso;
    char nome[1000];

    for (int i = 0; i < N_MAX; i++)
    {
        puts("\tDIGITE O SEU NOME : -->   ");
        scanf("%[^\n]", nome);

        printf("\tDIGITE UM NUMERO: --> ");
        scanf("%i", &NUMERO);

        puts("\tDIGITE A SUA IDADE: -->   ");
        scanf("%i", &idade);

        puts("\tDIGITE O SEU PESO: --> ");
        scanf("%f", &peso);
    }

    puts("\t\t ## DADOS OBTIDOS ## \t\t");
    printf("\t\nO SEU NOME EH: %s , VOCE TEM %i ANOS e FAZ %i CHUCAS POR DIA !!\t\n", nome, idade, NUMERO);

    return 0;
}