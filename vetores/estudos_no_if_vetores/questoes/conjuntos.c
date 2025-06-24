/*
    Crie um um programa em C que gera dois conjuntos de números inteiros aleatórios entre 0 e 20, tendo cada um 10 e 20 elementos, respectivamente. Em seguida, apresente os elementos que são comuns aos dois conjuntos.    
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NCJ1 10
#define NCJ2 20

int main(void) {
    int conjunto_01 [NCJ1];
    int conjunto_02 [NCJ2];

    // definindo a semente do rand
    // a partir do horário do SO
    srand(time(NULL));

    // preenchendo o vetor conjunto_01
    printf("\n -> CONJUNTO 01: ");
    for(int i = 0; i < NCJ1; i++) {
        conjunto_01[i] = rand() % 21;  // entre 0 e 20
        printf("%i ",conjunto_01[i]);
    }

    // preenchendo o vetor conjunto_01
    printf("\n -> CONJUNTO 02: ");
    for(int i = 0; i < NCJ2; i++) {
        conjunto_02[i] = rand() % 21;  // entre 0 e 20
        printf("%i ",conjunto_02[i]);
    }

    printf("\n\n");
    for(int i = 0; i < NCJ1; i++) {
        for(int j = 0; j < NCJ2; j++) {
            if(conjunto_01[i] == conjunto_02[j]) {
                printf("%i ",conjunto_01[i]);
                break;
            }
        }
    }

    return 0;
}