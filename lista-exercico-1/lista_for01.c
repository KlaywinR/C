#include <stdio.h>

// define o numero de pessoas entrevistadas, nesse caso sao 10 pessoas!
#define n_pessoas 5
int main(void)
{ 

    int altura;
    int altura_minima = 0;   // inicializando a variavel com 0.
    int altura_maxima = 999; // limite de altura do usuario.
    int soma_alturas = 0;
    int menores_q_160 = 0;

    // o inremento aumenta 1 a cada pessoa
    for (int i = 0; i < n_pessoas; i++)
    {
        printf("--> [%i] DIGITE A SUA ALTURA (em centimetros!): ", i + 1);
        scanf("%i", &altura);

        soma_alturas += altura;

        if (altura < 160)
            menores_q_160++;

        if (i == 0)
            altura_maxima = altura_minima = altura;

        else if (altura < altura_minima)
        {
            altura_minima = altura;
        }
        else if (altura < altura_maxima)
        {
            altura_maxima = altura;
        }
    }

    printf("\n   ALTURA GERAL(MAXIMA): %i", altura_maxima);
    printf("\n   ALTURA GERAL (MINIMA): %i", altura_minima);
    printf("\n   MEDIA GERAL: %i", altura_minima);
    printf("\n   SOMA GERAL DE ALTURAS: %.f", (float)soma_alturas / n_pessoas);
    printf("\n   PERCENTUAL GERAL DE PESSOAS MENORES QUE 1,60cm: %2.f  %% ", ((float)menores_q_160 / n_pessoas) * 100);

    return 0;
}