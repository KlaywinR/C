/*
. Receber dois valores do usuário: ALTURA e PESO. A partir deles calcular
o IMC pela seguinte fórmula:
*/

#include <stdio.h>
int main()
{

    float altura, peso, alturageral, imc;

    printf("\nDIGITE A SUA ALTURA: ->    ");
    scanf("%f", &altura);
    printf("\nDIGITE O SEU PESO CORPOREO: ->   ");
    scanf("%f", &peso);
    alturageral = altura * altura;

    imc = peso / alturageral;

    printf("O SEU IMC EH: %f\n", imc);

    if (imc < 20)
        printf("\nABAIXO DO PESO");
    else if (imc >= 20 && imc <= 25)
        printf("\npeso normal");
    else if (imc > 25 && imc <= 30)
        printf("SOBRE PESO");
    else if (imc > 30 && imc <= 40)
        printf("OBESO");
    else
        printf("OBESIDADE GRAVE");

    return 0;
}