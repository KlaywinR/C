#include <stdio.h>

int main(void){


//Faça um programa em linguagem C que recebe um número entre 1 e 12 e escreva por extenso o
//mês correspondente. Caso o usuário digite um número fora desse intervalo, deverá aparecer uma
//mensagem informando que não existe mês com este número.
   int numero; 
printf("\n\n\nDigite aqui um número entre 1 e 12\n\n\n");
    scanf("%d", &numero);

switch (numero) {
    case 1: 
     printf("\n\n\nJaneiro -- 31 DIAS\n\n\n");
    break;

    case 2: 
    printf("\n\n\nFevereiron --- 28 - 29 DIAS\n\n\n");
    break;
 
    case 3: 
     printf("\n\n\Março -- 31 DIAS\n\n\n");
     break;
    
    case 4: 
    printf("\n\n\Abril -- 28 DIAS");
    break;

    case 5: 
    printf("\n\n\nMaio -- 31 Dias");
    break;

    case 6:
    printf("\n\n\nJunho -- 30 DIAS\n\n\n");
    break;
    
    case 7:
    printf("\n\n\nJulho -- 31 DIAS\n\n\n");
    break;

    case 8:
    printf("\n\n\nAgost0 -- 31 DIAS\n\n\n");
    break;

    case 9:
    printf("\n\n\nSetembro -- 28 DIAS\n\n\n");
    break;

    case 10:
    printf("\n\n\nOutubro: Décimo mês, com 31 dias.\n\n\n");
    break;

    case 11:
    printf("\n\n\nNovembro: Décimo primeiro mês, com 30 dias.\n\n\n");
    break;

    case 12:
    printf("\n\n\nDezembro: Décimo segundo mês, com 31 dias.\n\n\n");
    break;
 
    default:
    printf("\n\n\n\nNÃO EXITE NENHUM MÊS COM ESTE NÚMERO DIGITADO!\n\n\n\n");
    break;
}
    return 0;
}