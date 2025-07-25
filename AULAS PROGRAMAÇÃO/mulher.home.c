#include <stdio.h>
#include <ctype.h>

int main(void) {
    char genero;
    int altura;
    int somatorio_alt_H = 0;  // somatório da altura dos homens
    int quant_M = 0;

    int somatorio_alt_F = 0;  // somatório da altura das mulheres
    int quant_f = 0;

    // Entrada inicial
    printf("\nDIGITE O SEU SEXO (M PARA MACHO E F PARA FEMÊA): ");
    scanf(" %c", &genero);

    printf("DIGITE A SUA ALTURA EM CENTÍMETROS: ");
    scanf("%d", &altura);

    while (altura > 0 && (toupper(genero) == 'M' || toupper(genero) == 'F')) {
        if (toupper(genero) == 'M') {
            somatorio_alt_H += altura;
            quant_M++;
        } else {
            somatorio_alt_F += altura;
            quant_f++;
        }

        // Próxima entrada
        printf("\nDIGITE O SEU SEXO (M PARA MACHO E F PARA FEMÊA): ");
        scanf(" %c", &genero); // espaço antes de %c para limpar o buffer

        printf("DIGITE A SUA ALTURA EM CENTÍMETROS: ");
        scanf("%d", &altura);
    }

    // Cálculo e exibição das médias
    if (quant_M > 0) {
        float media_H = (float)somatorio_alt_H / quant_M;
        printf("\nA MÉDIA MASCULINA É: %.2f cm\n", media_H);
    } else {
        printf("\nNENHUM HOMEM FOI INSERIDO.\n");
    }

    if (quant_f > 0) {
        float media_F = (float)somatorio_alt_F / quant_f;
        printf("A MÉDIA FEMININA É: %.2f cm\n", media_F);
    } else {
        printf("NENHUMA MULHER FOI INSERIDA.\n");
    }

    return 0;
}
