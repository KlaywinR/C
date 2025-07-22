

/*
    Implemente uma função/procedimento que realiza
    o incremento do valor de uma variável
    por um determinado valor passado como parâmetro
*/

#include <stdio.h>

void incrementa(int * ptrVar, int incremento);

int main(void) {
    int valor_incremento;
    int numero = 145;

    printf(" -> Incrementar em quanto: ");
    scanf("%i",&valor_incremento);

    incrementa(&numero,valor_incremento);
    printf(" \n Incremento realizado: %i",numero);

    return 0;
}


void incrementa(int * ptrVar, int incremento) {
    *ptrVar = *ptrVar + incremento;
}