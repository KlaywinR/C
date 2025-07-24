
#include <stdio.h>

int var_global = 25;

void exibir(int numero)
{
    printf("\nNumero(func-par): %i", numero);
    int n = 5;
    printf("\nN(func-dec): %i", n);

    int var_global = 55;
    printf("\nVar-Global(func): %i ", var_global);
}

int *teste_static()
{
    static int cont = 0; // única vez (criação)

    printf("\n Cont: %i", cont);
    cont++;

    return &cont;
}

int main(void)
{
    int numero = 10;      // local
    char caractere = 'A'; // local
    int *ptrNumero = &numero;

    printf("\nNumero(main): %i ", numero);
    printf("\nVar-Global(main): %i ", var_global);

    if (numero % 2 == 0)
    {
        int numero = 15; // local mais interno
        caractere = 'P';
        printf("\nNumero(if): %i", numero);
        printf("\nNumero(main-if): %i\n", *ptrNumero);
        printf("Var-Global(if): %i ", var_global);
    }

    printf("\nNumero(main): %i ", numero);

    // chamada de função
    exibir(numero);

    printf("\n\n TESTE STATIC");
    for (int i = 0; i < 5; i++)
    {
        int *ptrCont = teste_static();

        *ptrCont = *ptrCont + 1;
        printf("\n *ptrCont + 1: %i", *ptrCont);
    }

    return 0;
}