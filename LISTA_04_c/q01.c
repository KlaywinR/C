
/*Implemente um programa em linguagem C que preenche um vetor com a idade de 50 pessoas. Em
seguida, analise o vetor e apresente quantos por cento das pessoas são maiores de idade.*/
#include <stdio.h>

int main() {
    int idades[50];
    int maiores_de_idade = 0;
    float porcentagem;

    puts("ENCHENDO O VETOR COM AS IDADES");

    // Preenchendo o vetor com as idades
    for (int i = 0; i < 50; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    // Contando quantas pessoas são maiores de idade
    for (int i = 0; i < 2; i++) {
        if (idades[i] >= 18) {
            maiores_de_idade++;
        }
    }

    // Calculando a porcentagem
    porcentagem = (maiores_de_idade * 100.0) / 50.0;

    // Exibindo os resultados
    printf("Total de pessoas maiores de idade: | %d |\n", maiores_de_idade);
    printf("Porcentagem de maiores de idade: | %.2f%% |\n", porcentagem);

    return 0;
}
