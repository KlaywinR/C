#include <stdio.h>

int main(void) {
    int vetor [5] = {10, 2, 3, 4, 5};

    printf("\n vetor: %x", vetor);
    printf("\n *vetor: %i", *vetor);
    
    printf("\n VETOR: ");
    for(int i = 0; i < 5; i++) {
        printf("%i ", *(vetor+i));
    }

    printf("\n END VETOR: ");
    for(int i = 0; i < 5; i++) {
        printf("%x ", (vetor+i));
    }

    return 0;
}