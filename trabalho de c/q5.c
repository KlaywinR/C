
//

#include <stdio.h>
int main(void) {
    int prato_principal, a_sobremesa, bebida;
    int calorias = 0;

    printf("\n ---- ESCOLHA O PRATO PRINCIPAL ----\n");
    printf("\n 1 - VEGETARIANO - VALOR DE CALORIAS = 180 CAL\n");
    printf("\n 2 - PEIXE - VALOR DE CALORIAS = 230 CAL\n");
    printf("\n 3 - FRANGO - VALOR DE CALORIAS = 250 CAL\n");
    printf("\n 4 - CARNE - VALOR DE CALORIAS = 350 CAL\n");

    printf("\n-- DIGITE O NUMERO DO PRATO PRINCIPAL:\n");
    scanf("%i", &prato_principal);

    switch (prato_principal) {
    case 1:
        calorias += 180;
        break;
    case 2:
        calorias += 230;
        break;
    case 3:
        calorias += 250;
        break;
    case 4:
        calorias += 350;
        break;
    default:
        break;
    }

    printf("\n --------- ESCOLHA UMA SOBREMESA PARA VOCÊ ----------\n");
    printf("\n 1 - ABACAXI - VALOR DE CALORIAS = 75 CAL\n");
    printf("\n 2 - SORVETE DIET - VALOR DE CALORIAS = 110 CAL\n");
    printf("\n 3 - MOUSSE DIET - VALOR DE CALORIAS = 170 CAL\n");
    printf("\n 4 - MOUSSE DE CHOCOLATE  - VALOR DE CALORIAS = 200 CAL\n");

    printf("\n-- DIGITE O NUMERO DA SOBREMESA: \n");
    scanf("%i", &a_sobremesa);

    switch (a_sobremesa) {
    case 1:
        calorias += 75;
        break;
    case 2:
        calorias += 110;
        break;
    case 3:
        calorias += 170;
        break;
    case 4:
        calorias += 200;
        break;
    default:
        break;
    }

    printf("\n --------- ESCOLHA UMA BEBIDA PARA VOCÊ ----------\n");
    printf("\n 1 - CHÁ - VALOR DE CALORIAS = 30 CAL\n");
    printf("\n 2 - SUCO DE LARANJA - VALOR DE CALORIAS = 70 CAL\n");
    printf("\n 3 - SUCO DE MELÃO - VALOR DE CALORIAS = 100 CAL\n");
    printf("\n 4 - REFRIGERANTE DIET - VALOR DE CALORIAS = 65 CAL\n");

    printf("\n-- DIGITE O NUMERO DA BEBIDA:");
    scanf("%i", &bebida);

    switch (bebida)
    {
    case 1:
        calorias += 30;
        break;
    case 2:
        calorias += 70;
        break;
    case 3:
        calorias += 100;
        break;
    case 4:
        calorias += 65;
        break;
    default:
        break;
    }

    printf("\n -- A QUANTIDADE TOTAL DE CALORIAS DA SUA REFEICAO E : %i\n", calorias);

    return 0;
}