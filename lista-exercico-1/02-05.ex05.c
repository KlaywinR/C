#include <stdio.h>

//.Desenvolva um programa em linguagem C que recebe um número como entrada e imprima em tela
//se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, inclusive, ou se ele está fora
//destes escopos

int main(void){
 int numero;
 printf("digite um número qualquer aqui --->      ");
 scanf("%d", &numero);

 if(numero == 5 || numero == 200 || numero  == 400){     // == operador de comparação de números
    printf(" \nO NÚMERO QUE VOCE DIGITOU É IGUAL A 5 , 200 OU 400.\n");

 }   else if (numero >= 500 && numero <= 1000){                // verifica se o numero está dentro entre 500 e 1000.
    printf("\nO NÚMERO ESTÁ PRESENTE NO INTERVALO ENTRE 500 e 1000\n");
 } else { 
    printf("\nO NÚMERO ESTÁ FORA DO ESCOPO\n");
 }




    return 0;
}