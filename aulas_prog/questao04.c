//

#include <stdio.h>
#include <math.h>

int main(void)
{
    int nota1, nota2, nota3;
    printf("DIGITE A PRIMEIRA NOTA DO DISCENTE --->");
    scanf("%i", &nota1);

    printf("DIGITE A SEGUNDA NOTA DO DISCENTE --->");
    scanf("%i", &nota2);

    printf("DIGITTE A TERCEIRA NOTA DO DISCENTE --->");
    scanf("%i", &nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    printf("\n media das notas: %.2f", round(media));

    ////informando se foi aprovado ou nao
    // aprovado é maior que sete (7.0)

    return 0;
}
