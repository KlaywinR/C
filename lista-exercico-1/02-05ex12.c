#include <stdio.h>
#include <string.h>

int main(void) {
    char municipio[100];
    int eleitores, votos;
    double percentual;

    // Entrada do nome do município
    printf("| Digite aqui o nome do município :    |");
    fgets(municipio, sizeof(municipio), stdin);
    municipio[strcspn(municipio, "\n")] = '\0'; // Remove o caractere de nova linha

    // Entrada do número de eleitores aptos
    printf("Digite o número de eleitores aptos: ");
    scanf("%d", &eleitores);

    // Entrada do número de votos do candidato mais votado
    printf("Digite o número de votos do candidato mais votado: ");
    scanf("%d", &votos);

    // Verifica se há segundo turno
    if (eleitores > 20000) {
        percentual = (double)votos / eleitores * 100;
        if (percentual <= 50.0) {
            printf("\n\n | No município de %s haverá segundo turno.| \n\n", municipio);
        } else {
            printf("\n\n | No município de %s não haverá segundo turno.| \n\n", municipio);
        }
    } else {
        printf("\n | No município de %s não possui eleitores suficientes para um segundo turno. | \n", municipio);
    }

    return 0;
}