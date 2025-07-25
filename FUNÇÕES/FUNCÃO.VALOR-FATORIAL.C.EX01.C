#include <stdio.h>
// 1: valor1 > valor2 (valor positivo)
// 0: valor1 == valor2
// -1: valor1 < valor2
int compara_valores(int valor1, int valor2);

int fatorial(int);

int maiorValor(int vetor[], int tamanho); // PROTOTIPo do terceiro caso 
     

int main(void)
{
     int vetor[] = {63, 5,89, 33, 90, 24 , 67};
       int maior = maiorValor(vetor,7);
       printf("%i\n", maiorValor);
    

    /***************************** */

    int n;
    puts("DIGITE DOIS NUMEROS INTEIROS");
    scanf("%i", &n);
    printf("%i! = %i\n", n, fatorial(n));

/*************************************************/
    float n1, n2;
    int compara = compara_valores(n1, n2);
    switch (compara)
    {
    case 1:
        printf("%d > %d\n", n1, n2);
        break;
    case 0:
        printf("%d == %d", n1, n2);
        break;
    case -1:
        printf("%d < %d", n1, n2);

    default:
        break;
    }
    return 0;
}
/*********************************/
/* funcao que COMPARA DOIS VALORES*/
int compara_valores(int valor1, int valor2)
{
    if (valor1 > valor2)
    {
        return 1;
    }
    else if (valor1 < valor2)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
/*******************************************/

/******************************************/
/* funcao que calcula O FATORIAL*/
int fatorial(int n){
  if (n >= 0)
  {
      int fat = 1;   
    for (int i = 1; i < n; i++)
    fat = fat * i;
    {

    }
    return fat;
    
  } else {
    puts(" ERRO!: NÃO EXISTE ESTE NUMERO DIGITADO");
      return -1; 
  }


}
/********************************************/

int maiorVetor(int vetor[], int tamanho){
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++)
    {
        if (maior < vetor[i])
        {
             maior = vetor[i];
        }
        
    }
     return maior;

}