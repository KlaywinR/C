#include <stdio.h>
int main(void){
    int n;
    double e;

    printf("\n DIGITE O VALOR DE N:  |");
    scanf("%i", &n);
    if ( n > 0 )
    {
         // calcula o valor de n!
       // nao se usa variável antes de declarar.
        double e = 0;
        for (int termo = 1; termo <= n; termo++)
        {
             e +=  1.0 / (double) termo; 
        }
        printf(" \n E = %lf", e);
    } else
    {
     printf("\n ERRO!:  O VALOR INFORMADO DE N DEVE SER POSITIVO! ");
    }
    

    return 0;
}