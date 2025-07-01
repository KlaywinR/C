#include <stdio.h>

int main()
{
    /*crie um programa em c que armazena dados de
    funcionarios de determinada empresa.
    O programa deve ter idade, salario, e rg dos funcioinarios,
    e permitir que o usuario visualize no final a media de idade
   e a media salarial de seus funcionarios.

   ======== SEM STRUCTS =======
  */

    int numero_funcionarios;
    int idade[numero_funcionarios], rg[numero_funcionarios];
    float salario[numero_funcionarios];

    printf("DIGITE O NUMNERO DE FUNCIONARIOS DA EMPRESA: -->");
    scanf("%i", &numero_funcionarios);

    if (numero_funcionarios > 0) // so existe o numero de funcionarios de for maior do que 0.
    {
        printf(" ----- cadastro de funcionarios -----");
    }

    for (int i = 0; i < numero_funcionarios; i++)
    {
        printf("DIGITE a idade dos funcionarios AQUI: ");
        scanf("%i", &idade[i]);
        printf(" DIGITE O SALARIO AQUI: ");
        scanf("%f", &salario[i]);
        printf(" DIGITE O NUMERO DO RG DOS funcionarios");
        scanf("%i", &rg[i]);
        // Removido: não é necessário pedir o número de funcionários dentro do loop

        printf("\n\n");

        printf(" AS MEDIAS SAO");
        int soma_idades = 0;
        float soma_salarios = 0;
        for (int i = 0; i < idade; i++)
        {
            soma_idades += idade[i];
            soma_salarios += salario[i];
        }

        printf("MEDIA GERAL DE IDADADES %i", soma_idades / numero_funcionarios);
        printf(" A MEDIA DE SALARIOS EH: %.2f", soma_salarios / numero_funcionarios);
        printf("a media de rgs eh de: %i", soma_idades / numero_funcionarios);
    }

    return 0;
}