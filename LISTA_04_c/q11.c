/*
11) Faça um programa em linguagem C que leia um vetor de 13 elementos inteiros, que corresponde
ao Gabarito de um teste da loteria esportiva. Cada posição do vetor pode conter os seguintes
valores: 1 (coluna 1), 2 (coluna 2) e 3 (coluna do meio). Em seguida, leia os cartões de um número
determinado de apostadores. Para cada apostador, deve ser informado um vetor de Respostas de
14 posições. O programa deve verificar e exibir em tela o número de acertos, comparando o vetor
de Gabarito com o vetor de Respostas. Se o apostador tiver 13 acertos, a mensagem “Ganhador”
deve ser exibida. 

*/
#include <stdio.h>

int main() {
    int gabarito[13];
    int num_apostadores;

    // Leitura GERAL DO GABARI
    printf("Digite o gabarito - 13 num - entre 1 e 3 :\n");
    for (int i = 0; i < 13; i++) {
        do {
            printf("Gabarito [%d]: ", i + 1);
            scanf("%d", &gabarito[i]);
        } while (gabarito[i] < 1 || gabarito[i] > 3);
    }

    // Leitura do número de apostadores
    printf("\nDigite o número de apostadores: ");
    scanf("%d", &num_apostadores);

    // Verificação para cada apostador
    for (int a = 0; a < num_apostadores; a++) {
        int respostas[14];
        int acertos = 0;

        printf("\nApostador %d - digite as 14 respostas (valores entre 1 e 3):\n", a + 1);
        for (int i = 0; i < 14; i++) {
            do {
                printf("Resposta [%d]: ", i + 1);
                scanf("%d", &respostas[i]);
            } while (respostas[i] < 1 || respostas[i] > 3);
        }

        // Verifica acertos com os 13 primeiros
        for (int i = 0; i < 13; i++) {
            if (respostas[i] == gabarito[i]) {
                acertos++;
            }
        }

        // Mostra o resultado
        printf("Apostador %d teve %d acertos. ", a + 1, acertos);
        if (acertos == 13) {
            printf("Ganhador!\n");
        } else {
            printf("\n");
        }
    }

    return 0;
}
