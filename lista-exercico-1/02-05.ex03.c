
//Implemente um programa em linguagem C que leia três números e informa se eles podem formar    
//os lados de um triângulo. Lembre-se que em um triângulo, o valor de cada um dos lados deve ser
//menor do que a soma dos dois demais lados.   
/// QUESTAO 02 - EXERCIOCIOS 02


#include <stdio.h>

int main(void){
     int  lado1, lado2, lado3;                    // ---------------VARIÁVEIS COLETADAS FORAM LADOS 1, 2 e 3 DO TRIANGULO

    printf("DIGITE O VALOR DO PRIMEIRO LADO ---->     ");    //ENTRADA DE DADOS
    scanf("%d", &lado1);                                     // SAIDA DOS DADOS COLETADOS


    printf("DIGITE O VALOR DO SEGUNDO LADO ---->      ");    //ENTRADA DE DADOS
    scanf("%d", &lado2);                                    // SAIDA DOS DADOS COLETADOS

    
    printf("DIGITE O VALOR DO TERCEIRO LADO --->      ");   //ENTRADA DE DADOS
    scanf("%d", &lado3);                                      // SAIDA DOS DADOS COLETADOS


    if(lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1+lado3){  //// cada lado deve ser menor que a soma dos outros dois lados.
       printf("\nOS VALORES QUE VOCÊ INFORMOU PODEM SIM FORMAR UM TRIÂNGULO PERFEITO\n");
    } else {
        printf("\nOS VALORES INFORMADOS NÃO PODEM DE MANEIRA ALGUMA FORMAR UM TRIÂNGULO PERFEITO\n");
    }


    return 0;
}


