#include <stdio.h>
#include <math.h>

int main(void) {
    double num1, num2;

    printf("\nDIGITE O PRIMEIRO NÚMERO\n");
    scanf("%lf", &num1);

    printf("\nDIGITE O SEGUNDO NÚMERO\n");
    scanf("%lf", &num2);

    if (num1 < num2) {
        printf("O PRIMEIRO NÚMERO É MENOR QUE O SEGUNDO.\n");
        printf("O quadrado do primeiro número é: %.2lf\n", pow(num1, 2));
    } else {
        if (num2 >= 0) {
            printf("A raiz quadrada do segundo número é: %.2lf\n", sqrt(num2));
        } else {
            printf("Não é possível calcular a raiz quadrada de um número negativo.\n");
        }
    }

    return 0;
}