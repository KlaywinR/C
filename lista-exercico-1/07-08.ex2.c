#include <stdio.h>

int main(void){
 
    int numero;


    printf("digite um numero de 1 a 12 ---->");
    scanf("%i", &numero);

    switch (numero)
    {
    case 1:
        printf("JANEIRO");
        break;
    
        case 2:
        printf("FEVEREIRO");
        break;
    
        case 3:
        printf("MARÇO");
        break;
    
        case 4:
        printf("MAIO");
        break;
    
        case 6:
        printf("JUNHO");
        break;

        case 7:
        printf("JULHO");
        break;

        case 8:
        printf("AGOSTO");
        break; 

        case 9:
        printf("SETEMBRO");
        break;

        case 10:
        printf("OUTUBRO");
        break;

        case 11:
        printf("NOVEMBRO");
        break;

        case 12:
        printf("DEZEMBRO");
        break;


    default:
     printf(" NAO EXISTE NENHUM MES COM ESSE NÚMERO");
        break;
    }
    return 0;
}