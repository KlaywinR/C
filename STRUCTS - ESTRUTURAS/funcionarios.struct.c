#include <stdio.h>
// tipo de dados
typedef struct funcionarios
{
    int idade, rg;
    float salario;
};

int main()
{
    /*crie um programa em c que armazena dados de
    funcionarios de determinada empresa.
    O programa deve ter idade, salario, e rg dos funcioinarios,
    e permitir que o usuario visualize no final a media de idade
   e a media salarial de seus funcionarios.

   ======== COM STRUCTS =======
  */
    int numero_funcionarios;
    struct funcionarios funcionarios[numero_funcionarios];

    printf("DIGITE O NUMERO DE FUNCIONARIOS DA EMPRESA: -->");
    scanf("%i", &numero_funcionarios);

    if (numero_funcionarios > 0) // so existe o numero de funcionarios de for maior do que 0.
    {
        printf(" ----- cadastro de funcionarios -----");
    }

    for (int i = 0; i < numero_funcionarios; i++)
    {
        printf("DIGITE a idade dos funcionarios AQUI: ");
        scanf("%i", &funcionarios);
        printf(" DIGITE O SALARIO AQUI: ");
        scanf("%f", &funcionarios[i].salario);
        printf(" DIGITE O NUMERO DO RG DOS funcionarios");
        scanf("%i", &funcionarios[i].rg);
        // não é necessário pedir o número de funcionários dentro do loop

        printf("\n\n");

        printf(" AS MEDIAS SAO");
        int soma_idades = 0;
        float soma_salarios = 0;
        for (int i = 0; i < funcionarios; i++)
        {
            soma_idades += funcionarios[i].idade;
            soma_salarios += funcionarios[i].salario;
        }

        printf("MEDIA GERAL DE IDADADES %i", soma_idades / numero_funcionarios);
        printf(" A MEDIA DE SALARIOS EH: %.2f", soma_salarios / numero_funcionarios);
        printf("a media de rgs eh de: %i", soma_idades / numero_funcionarios);
    }

    return 0;
}