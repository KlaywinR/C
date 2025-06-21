/*
    Crie um programa em linguagem C que deve armazenar o valor do salário de 50 funcionários de uma empresa em um dado momento. Considere, que posteriormente, todos esses funcionários irão receber um aumento de x% informado pelo usuário. Neste caso, os valores dos salários devem ser atualizados e impressos em tela (relatório).
*/

#include <stdio.h>

#define N_FUNCIONARIOS 50

int main(void) {
    float salarios [N_FUNCIONARIOS];

    for(int i = 0; i < N_FUNCIONARIOS; i++) {
        printf(" -> Salario do funcionario %i: ", i + 1);
        scanf("%f",&salarios[i]);
    }

    float perc_aumento;

    printf("\n -> Percentual de aumento (%%): ");
    scanf("%f",&perc_aumento);

    if(perc_aumento > 0) {
        for(int i = 0; i < N_FUNCIONARIOS; i++) {
            //salarios[i] = salarios[i] * (1 + perc_aumento/100);
            salarios[i] *= (1 + perc_aumento/100);
            printf(" \n ** Novo salario [%i]: R$ %.2f", i + 1, salarios[i]);
        }
    } else {
        printf("\n *** Percentual de aumento invalido!");
    }

    return 0;
}