#include <stdio.h>
int main(void)
{
    int produtos_loja[10];
    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("DIGITE O VALOR DO PRODUTO [%d] DA SUA LOJA ", i + 1);
        scanf("%d", &produtos_loja[i]);
        soma += produtos_loja[i];
    }
    printf(" O VALOR TOTAL DOS PRODUTIS EH DE : %d\n", soma);

    return 0;
}