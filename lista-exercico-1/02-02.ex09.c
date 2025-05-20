#include <stdio.h>

int main (void){
   
    //Implemente um programa em linguagem C que leia a idade de uma pessoa e informa a sua classe
    //eleitoral. Não eleitor (abaixo de 16 anos), eleitor obrigatório (entre 18 e 65 anos) e eleitor facultativo
    //(entre 16 e 18 anos e maior de 65 anos).
 
   int idade;
   printf("  DIGITE SUA IDADE -------->                ");
   scanf("%i", &idade);
   if (idade < 16){
    printf("\n\nClasse Eleitoral: Não Votante\n");
   } else if ((idade >= 16 && idade < 18) || (idade > 65)){
    printf("\nClase Eleitoral: Votante Facultativo\n");
    

        } else if (idade >= 18 && idade <= 65){
            printf("\n\nClasse Eleitoral: Obrigatória(o)\n\n\n");
        } else {
            printf("\n\n\nIdade Eleitoral Inválida\n\n\n");

        }
        
    return 0;
}