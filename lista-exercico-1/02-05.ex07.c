#include <stdio.h>

int main(void){
 //Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra
//for menor que R$ 20,00; caso contrário, o lucro será de 30%. Crie um programa em linguagem C que
//receba o valor do produto adquirido e imprima em tela o valor da venda.

 float valordacompra, valordavenda;

// entrada do usuario

 printf(" DIGITE O VALOR DA SUA COMPRA AQUI ----->      ");
 scanf("%d", &valordacompra);
  
 if(valordacompra < 20.00){
    valordavenda = valordacompra * 1.45;

 } else {
    valordavenda = valordacompra * 1.30;

 }  printf("\nO VALOR DA VENDA DO PRODUTO É: \n %.2f", valordavenda);

    return 0;
}