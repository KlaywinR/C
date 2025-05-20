#include <stdio.h>

// estrutura mais simples é if
// ele terá uma condição, caso seja verdadeira ela irá executar o bloco de código.

//////ESTRUTURA COMPOSTA////
   // ---> USA IF E ELSE 
   //---> sempre será falso ou verdadeiro!
   //

int main(void){
        int num; 
    printf("DIGITE UM NUMERO  <int>:");
    scanf("%i", &num);

if (num %2 == 0){
    //bloco de código; so exexcuta se for verdadeiro
    printf("\n \n o numero %i e par", num);


} else {
    printf("\n o numero %i e impar");  // quando o bloco de comando tiver so 1 linha e opcional por chaves

}

printf("\n\n FIM");  //caso nao seja PAR, entao é impar( ele imprimirá fim);









    return 0;
}







