/*
. Receba três números: A,B e C. Depois printe na tela eles em ordem
crescente.
 */
#include <stdio.h>
int main()
{

    int numA, numB, numC, aux;

    printf("\tDIGITE O PRIMEIRO NUMERO: -> ");
    scanf("%i", &numA);
    printf("\tDIGITE O SEGUNDO NUMERO: -> ");
    scanf("%i", &numB);
    printf("\tDIGITE O TERCEIRO NUMERO: -> ");
    scanf("%i", &numC);
 if (numA < numB && numA < numC) {
    printf("O PRIMEIRO NUMERO EH O MENOR");
} else if (numB < numA && numB < numC) {
    printf("O SEGUNDO NUMERO EH O MENOR NUMERO");
} else if (numC < numA && numC < numB) {
    printf("O TERCEIRO NUMERO EH O MENOR!");
}

if (numA > numB)
  aux = numA;
  numA = numB;
  numB = aux;

  if (numA > numC)
   aux = numA;
   numA = numC;
   numC = aux;

   if (numB > numC)
       aux = numB;
       numB = numC;
       numC = aux;
       
       printf("\tXXXXXXXXXXXXXXXXXXXXXX\t");
       printf("\nRESULTADO ordem crescente: --> %d\n %d\n %d\n", numA, numB, numC);

       
   
  




   return 0;
}
            

