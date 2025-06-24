/*
    Crie um programa em linguagem C que cria um
    vetor de inteiros de 10 elementos sem repetição (distintos), cujos números são gerados aleatoriamente entre 0 e 20.    
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void) {
    srand(time(NULL));  // semente do rand

    int vetor [N];
    int n_inseridos = 0;
    int numero;
    int existe_numero = 0;  // 0 - Não existe

    printf("\n NUMEROS GERADOS: ");
    do {
        numero = rand() % 21;  // entre 0 e 20
        existe_numero = 0;
        printf("%i ", numero);
        
        for(int i = 0; i < N; i++) {
            if(numero == vetor[i]) {
                existe_numero = 1;  // numero ja existe no vetor
                break;
            }
        }
      
        if(!existe_numero) {
            vetor[n_inseridos] = numero;
            n_inseridos++;
        }
    } while (n_inseridos < N);

    printf("\n VETOR: ");
    for(int i = 0; i < N; i++) {
        printf("%i ", vetor[i]);
    }

    return 0;
}