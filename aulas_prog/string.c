#include <stdio.h>
#include <string.h>

int main(void){

    char nome[30];  // declaracao de string
    char nome2[30];  // declaracao de string
    int numero;


    printf("\n-> Digite um numero: "); //entrada de dados 
    scanf("%i", &numero);   //saida de dados

    fflush(stdin);

    printf("\n=> Digite o seu nome1: ");
    scanf("%[^\n]", &nome);
    
    fflush(stdin);  // uasada para fluxos de saida de dados!
    
    printf("\n=> Digite o seu nome2: ");
    // uma forma de atribuir uma cadeia de caracteres (string) a um vetor
    // porem ele finaliza o nome no primeiro espaço: Exemplo: jose Thiago, lê apenas Jose, a barra de espaço é interpretado como o fim da string
    /* scanf("%s", &nome);*/

   // lendo usando um formatador
   //leia qualquer coisa até encontrar o /n(Enter)
   scanf("%[^\n]", &nome2);

    printf("O seu nome1 eh %s e o nome2 eh %s!", nome, nome2);

    /* >0: nome1 > nome2
        ==0: nome1 == nome2
        <0: nome1 <  nome2 
    */
    
    int cmp = strcmp(nome,nome2);

    if (cmp > 0){
        printf("A ordem Alfabetica eh: 1º:  %s e 2º: %s!", nome2, nome);
    }else if(cmp < 0){
        printf("A ordem Alfabetica eh: 1º:  %s e 2º: %s!", nome, nome);
    }else{
        printf("String iguais!");
    }

    return 0;
}