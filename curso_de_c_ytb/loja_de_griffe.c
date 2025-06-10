#include <stdio.h>
int main(void){
    #define casaco = 450;
    #define meia = 150;
    #define blusa_regata = 120;
    #define calça_bordada = 550;
    #define calça_jeans = 350;
    #define tenis = 600;
    #define sapato = 1000;

    int item_escolhido = 0;
    float valor_conta;

    while (1)
    {
    printf("\n-----------------------------------------------------------------\n");
      printf("\n$$$ SEJA BEM VINDO A LOJA BENJAMIM - ARTIGOS DE GRIFFE $$$\n");
      printf("\n1 CASACO OVERSIZE R$ 450,00");
      printf("\n2 MEIA GUCCI R$ 150");
      printf("\n3 BLUSA REGATA R$ 120,00");
      printf("\n4 CAÇA BORDADA R$ 550,00");
      printf("\n5 CALÇA JEANS T$ 350,00");
      printf("\n6 TENIS ASTON MARTIN  R$ 600,00");
      printf("\n7 SAPATO BALENCIAGA R$ 1.000,00");
      printf("\n-----------------------------------------------------------------\n");
      printf("\n SELECIONE UM PRODUTO DA NOSSA LOJA\n");
      scanf("%i", &item_escolhido);
       if (item_escolhido == 0)
       {
         break;
       } 
         switch (item_escolhido)
         {
          case 1:
          valor_conta  += 450;
          break;
          case 2:
          valor_conta  += 150;
          break;
          case 3:
          valor_conta += 120;
          case 4: 
          valor_conta += 550;
          break;
          case 5: 
          valor_conta += 350;
          break;
          case 6:
          valor_conta += 600;
          break;
          case 7: 
          valor_conta += 1000;
          break;

         default:
         printf("NAO EXITE ESSE ITEM NA NOSSA LOJA!");
          break;
         }
          printf(" O VALOR ATUAL DA CONTA EH: %.2f\n", valor_conta);

        }
        
          printf("O VALOR GERAL DA CONTA EH : %.2f", valor_conta);

       


    return 0;
}