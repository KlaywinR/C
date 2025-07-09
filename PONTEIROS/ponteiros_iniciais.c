#include <stdio.h>
typedef struct Notas
{
    float nota02;
    float nota01;
};

int main(void)
{
    float numero = 3.5;

    float *ptrFloat; // armazena um endereço.

    /*
      float +  ptrFloat = NULL -> neste caso, ele aponta para o nada, o NULL.
    */

    // armazenando um endereço
    ptrFloat = &numero;

    printf("\nConteudo de numero: %.2f\n", numero);
    printf("\nENDERECO DO NUMERO: %p\n", &numero);
    printf("\nENDERECODE PTR FLOAT : %x", &ptrFloat);
    printf("\nCONTEUDO PTR FLOAT : %x", ptrFloat);
    printf("\nCONTEUDO DD NUMERO VIA PONTEIRO: %.2f", *ptrFloat);

    struct Notas notas_alunos;

    notas_alunos.nota01 = 9.8;
    notas_alunos.nota02 = 3.4;

    struct Notas *ptrNotas;
    ptrNotas = &notas_alunos;

    printf(" * NOTA 01 : %f\n", notas_alunos.nota01);
    printf(" * NOTA 02 : %f\n", notas_alunos.nota02);

    // Exemplo de acesso ao campo nota01 via ponteiro
    printf(" * NOTA 01 via ponteiro: %f\n", (*ptrNotas).nota01);
    printf(" * NOTA 02 via ponteiro: %f\n", (*ptrNotas).nota02);

    *ptrFloat = numero * 10;
    printf("\nConteudo de numero: %.2f\n", numero);
    printf("\nCONTEUDO DD NUMERO VIA PONTEIRO: %.2f", *ptrFloat);
}
