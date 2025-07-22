#include <stdio.h>

void passagem_valor(int numero);
void passagem_referencia(int * numero);
 
int main(void) {
    int n = 5;

    passagem_valor(n);  // valor armazenado em n
    printf(" -> Valor de n: %i\n\n", n);

    passagem_referencia(&n);  // endereço de n
    printf(" -> Valor de n: %i\n\n", n);


    return 0;
}

void passagem_valor(int numero) {
    numero = numero * 10;
    printf(" -> [VLR] Novo Numero: %i", numero);
}

void passagem_referencia(int * numero) {
    *numero = *numero * 10;
    printf(" -> [REF] Novo numero: %i", *numero);
}