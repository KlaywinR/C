#include <stdio.h>
#define N_MAX 3
int main(void)
{

    int vetor[4] = {23, 44, 56, 77};
    for (int i = 0; i < N_MAX; i++)
    {

        puts("--------------------------------------------------------");
        printf("o conteudo do vetor eh: %x\n", &vetor[i]);
        printf("O endereco do numero do vetor eh: %x", vetor[i]);
        puts("--------------------------------------------------------");
    }

    return 0;
}