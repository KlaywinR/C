#include <stdio.h>
#include <math.h>
int main(void)
{
    // ceil = teto
    // floor = piso
    // round = arrendondamento do numero

    float x, y;
    float xp, yp;

    printf("INSIRA AS DIMENSOES DO AMBIENTE AQUI");

    printf("--> digite o valor da largura  do ambiente:");
    scanf("%f", &x);

    printf("--> digite o valor da largura do ambiente");
    scanf("%f", &y);

    printf("--> digite o valor de xp:");
    scanf("%f", &xp);

    printf("--> digite o valor de yp:");
    scanf("%f", &yp);

    float area_ambiente = x * y;
    float area_piso = xp * yp;

    float num_ambiente = area_ambiente / area_piso;

    printf("\n numero de ceramicas usadas: %f", area_piso);

    return 0;
}