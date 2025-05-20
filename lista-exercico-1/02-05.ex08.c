#include <stdio.h>

int main(void) {
    float altura, pesoIdeal;
    char sexo;
    // Entrada da altura
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    // Entrada do sexo
    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);  // espaço antes de %c é importante para ignorar o ENTER anterior

    // Cálculo do peso ideal
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n");
        return 1;  // Encerra o programa com erro
    }

    // Exibe o resultado
    printf("Seu peso ideal é: %.2f kg\n", pesoIdeal);

    return 0;
}