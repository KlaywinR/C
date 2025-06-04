#include <stdio.h>
int main(){
    #define misto = 5;
    #define cheese_burguer = 10
    #define copo_suco = 6
    #define refrigerante = 3.5
    
     int produto_escolhido;

     float valor_conta = 0;


    do {
    printf("\n============== NOSSSO MENU ================\n");
    printf("\n[1] NOSSO MISTO QUENTE --- 5,00");
    printf("\n[2] NOSSO CHEESE BURGUER --- 10,00 ");
    printf("\n[3] NOSSO SUCO --- 6,00");
    printf("\n[4] NOSSO REFRIGERANTE --- 3,50");
    printf("\n[0] ENCERRANDO A SUA COMPRA\n");
    printf("=====================================");
    printf("\nSELECIONE O PRODUTO QUE DESEJA:\n");
    scanf("%i", &produto_escolhido);
    } while (produto_escolhido != 0);
    {
        if(valor_conta > 0){
            printf("o valor da conta deu: %i", valor_conta);
        }
    }
    switch (produto_escolhido)
    {
    case 1:
        valor_conta += 5;
        break;
    case 2:
        valor_conta += 10;
        break;
    case 3:
        valor_conta += 6;
        break;
    case 4:
       valor_conta += 3.5;
        break;
    case 0:
        break;
    
    default:
       printf("\n ESTE ITEM NAO ESTA PRESENTE NO NOSSO MENU!");
        break;
    }
    


    return 0;
}