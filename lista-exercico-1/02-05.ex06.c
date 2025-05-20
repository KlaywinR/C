#include <stdio.h>

int main(void){

    // Crie um programa em linguagem C que leia o salário de uma pessoa e imprima o desconto INSS
//segundo a tabela a seguir:
//menor ou igual a R$ 600,00                             |    Isento
//maior que R$ 600,00 e menor ou igual a R$ 1200,00      |     20%
//maior que R$ 1200,00 e menor ou igual a R$ 2000,00     |     25%
//maior que R$ 2000,00                                   |     30%
     float salario, desconto; 

     printf("\nDIGITE AQUI O SEU SALARIO DO INSS\n");
       scanf("%d", &salario);

       if( salario <= 600.00){
        printf("\nVocê é insento dos descontos do INSS\n");

       } else if (salario <=1200.00){
        desconto = salario * 0.20;
        printf(" O SEU DESCONTO EM REAIS É  : %3.df", &desconto);

       }  else if (salario <= 2000.00){
        desconto =  salario * 0.25;
        printf(" O SEU DESCONTO EM REAIS É  : %3.df", &desconto);
          
       } else {
        desconto = salario *0.30;
       }

    return 0;
}