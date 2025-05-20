#include <stdio.h>

int main() {
    int idade;

    printf("Insira sua idade aqui: ");
    scanf("%i", &idade);

    if (idade < 18) {
        printf("É MENOR DE IDADE\n");
    } else {
        printf("É MAIOR DE IDADE\n");
    }

    return 0;
}