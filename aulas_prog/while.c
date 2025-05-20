#include <stdio.h>

int main(void)
{

    int contador = 1; // inicio de variavel com qualquer valor

    while (contador <= 100) // executa enquanto a comparacao for verdadeira; caso contrario ele encerrará.
    {
        printf("\n%i:PROGRAMCAÇAO DE COMPUTADORES\n", contador);
        contador++; // incrementa , para evita o loop infinito
        // caso seja "contador--", ele comecaria do maior para o menor numero!
    }

    printf("\n\nFIM DO PROGRAMA\n\n");

    return 0;
}