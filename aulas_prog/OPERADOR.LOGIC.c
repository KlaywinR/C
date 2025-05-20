#include <stdio.h>
int main(void)
{
#define TRUE 1  // VERDADEIRO LÓGICO
#define FALSE 0 //   FALSO LÓGICO

    // PARA QUE SERVE O DEFINE?//
    //---> Serve para definir constantes ou macros, substitui ocorrencias do iddentificador.
    //---> RESUMO: SERVE COMO ETIQUETA PARA LEMBRAR ALGO DAQUILO QUE VOCE DEU O NOME.
    //---> Todavia que usar True, o computador vai se lembrar que ele vale 1, e se usar False ele se lembra que vale 0.

    printf("TABELA VERDADE AND");
    printf("\n a b | a && b");
    printf("\n ---------------------------------");
    printf(" \n %i | %i | %i  F,V,F && V");
    printf(" \n %i | %i | %i  F,V,F && V");
    printf(" \n %i | %i | %i  F,V,F && V");
    printf(" \n %i | %i | %i  F,V,F && V");
    printf(" \n %i | %i | %i  F,V,F && V");
    printf(" \n %i | %i | %i  F,V,F && V");
    printf(" \n %i | %i | %i  F,V,F && V");

    printf("\n\n * NOT(0): %I", !0);
    printf("\n\n  * NOT(-5): %d", !-5);

    /// QUANDO SE USA O NOT ---> digamos que entro em um programa, ele vai testar se é par ou impar
    //---> ou o comando é par ou ele é impar

    return 0;
};
