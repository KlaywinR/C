#include <stdio.h>
     
//Este programa em C solicita ao usuário que insira um número correspondente a um dia da semana (de 1 a 7).
// Com base no número fornecido, o programa verifica se o valor está dentro do intervalo válido e exibe uma mensagem genérica indicando 
//"meio de semana". Caso o número digitado esteja fora do intervalo de 1 a 7, o programa informa que o número não corresponde 
//a nenhum dia da semana.
int main(void){
 
   int diadasemana;

   printf("\n\nDIGITE UM DIA DA SEMANA \n\n");
   scanf("%i", &diadasemana);
  
    switch (diadasemana)
    {
        case 1:        
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
       
        case 7:
        printf("\n\n meio  de semana \n\n");
        break;

       default:
       printf("\n\nNAO EXISTE NENHUM DIA NA SEMANA\n\n");

    }
    
    return 0;
}