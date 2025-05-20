////Crie um programa em linguagem C que leia dois números e imprima em tela uma mensagem
//informando see estes números são iguais ou diferentes. 
////  QUESTAO 01 -- EXERCICIOS 02

#include <stdio.h>

int main(void){
      int num1, num2;
    printf("DIGITE AQUI O PRIMEIRO NUMERO ---->: ");
    scanf("%d", &num1);

    printf("DIGITE AQUI O SEGUNDO NUMERO ---->: ");
    scanf("%d", &num2);

    if(num1 == num2){
        printf("\n OS NUMEROS SAO IGUAIS \n");

    } else{
        printf("\nos números sao diferentes!\n ");
    }






    return 0;

}