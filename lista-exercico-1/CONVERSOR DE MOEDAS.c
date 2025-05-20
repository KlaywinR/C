#include <stdio.h>

int main() {
    // float: para números com casa decimais
    // %.2f: para contar quantas casas decimais após a vírgula
    // int: para números inteiros
    // do: usada para criar um laço de repetição 
    // break: interrompe o código

    float valorReal, taxaCambio, valoremDolar, valorEuro;
    int opcao;

    printf("SEJA BEM-VINDO AO CONVERSOR DE MOEDAS!\n");

    do {
        printf("SELECIONE UMA OPÇÃO DENTRE AS CINCO, CASO NÃO ESCOLHA NENHUMA DIGITE 5 PARA SAIR DO CONVERSOR \n");
        printf("OPCAO 1 - REAL PARA DOLAR\n");
        printf("OPCAO 2 - REAL PARA EURO\n");
        printf("OPCAO 3 - DOLAR PARA REAL\n");
        printf("OPCAO 4 - EURO PARA REAL\n");
        printf("OPCAO 5 - SAIR\n");

        scanf("%d", &opcao); // Lê a opção digitada pelo usuário

        switch (opcao) {
            case 1: {
                printf("DIGITE O VALOR EM REAL QUE VOCÊ DESEJA CONVERTER PARA DOLAR --->: ");
                scanf("%f", &valorReal);

                taxaCambio = 5.67; // Taxa de câmbio em relação ao real
                valoremDolar = valorReal / taxaCambio;

                printf("Valor em Dólar: %.2f\n", valoremDolar);
                break; 
            }

            case 2: {
                printf("DIGITE O VALOR EM REAL QUE VOCÊ DESEJA CONVERTER PARA EURO ---> : ");
                scanf("%f", &valorReal);

                taxaCambio = 6.19; // Taxa de câmbio em relação ao real
                valorEuro = valorReal / taxaCambio;

                printf("Valor em Euro: %.2f\n", valorEuro);
                break;
            }

            case 3: {
                printf("DIGITE O VALOR EM DOLAR QUE VOCÊ DESEJA CONVERTER PARA REAL --->: ");
                scanf("%f", &valoremDolar);

                taxaCambio = 5.67; // Taxa de câmbio em relação ao real
                valorReal = valoremDolar * taxaCambio;

                printf("Valor em Real: %.2f\n", valorReal);
                break;
            }

            case 4: {
                printf("DIGITE O VALOR EM EURO QUE VOCE DESEJA CONVERTER PARA REAL --->: ");
                scanf("%f", &valorEuro);

                taxaCambio = 6.19; // Taxa de câmbio em relação ao real
                valorReal = valorEuro * taxaCambio;

                printf("Valor em Real: %.2f\n", valorReal);
                break;
            }

            case 5: {
                printf("ENCERRANDO O CONVERSOR DE MOEDAS..\n");
                break;
            }

            default:
                printf("OPÇÃO NÃO ENCONTRADA NO SISTEMA.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}