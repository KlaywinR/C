#include <stdio.h>

#define N_VETOR 5

int main(void) {
    int vetor[N_VETOR] = {4, 2, 9, 15, 3};

    for(int i = 0; i < N_VETOR; i++) {
        for(int j = i + 1; j < N_VETOR; j++) {
            if(vetor[i] > vetor[j]) {
                int aux = vetor[i];
                
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\n VETOR ORDENADO: ");
    for(int i = 0; i < N_VETOR; i++) {
        printf("%i ", vetor[i]);
    }

    return 0;
}