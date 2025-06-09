#include <stdio.h>
int main()
{

    int idade;
    int ano;
    float peso;

    printf("DIGITE A SUA IDADE\n");
    scanf("%i", &idade);
    printf("DIGITE O ANO ATUAL:");
    scanf("%i", &ano);
    printf("DIGITE O SEU PESO\n");
    scanf("%f", &peso);

    printf("\nIDADE DIGITADA EH: %i\n", idade);
    printf("\nO ANO INFORMADO EH: %i\n", ano);
    printf("\nO PESO INFORMADO EH: %f", peso);
    printf("\nOS NUMEROS DE IDADE E ANO SAO: %i %i %f\n", idade, ano, peso);

    return 0;
}