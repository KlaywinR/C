#include <stdio.h>
#include <math.h> // sqrt

int main(void)
{
    double a, b, c;

    printf(" -> Digite valor de a: ");
    scanf("%lf", &a);

    printf(" -> Digite valor de b: ");
    scanf("%lf", &b);

    printf(" -> Digite valor de c: ");
    scanf("%lf", &c);

    double delta = b * b - 4 * a * c;
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);

    printf("\n Raizes da Equacao.... ");
    printf("\n x1: %.2lf, x2: %.2lf", x1, x2);
}