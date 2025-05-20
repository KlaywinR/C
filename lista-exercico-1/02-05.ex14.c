#include <stdio.h>

int main(void){
 
   int diadasemana;

   printf("\n\nDIGITE UM DIA DA SEMANA \n\n");
   scanf("%i", &diadasemana);
  
    switch (diadasemana)
    {
        case 1:
        printf("\n\n Este dia remete a uma segunda feira\n\n");
        break;

        case 2:
        printf("\n\n Este dia remete a uma terca feira\n\n");
        break;

        case 3:
        printf("\n\n Este dia remete a uma quarta feira\n\n");
        break;
        
        case 4:
        printf("\n\n Este dia remete a uma quinta feira\n");
        break;

        case 5:
        printf("\n\n Este dia remete a uma sexta feira \n\n");
        break;

        case 6:
        printf("\n\n Este dia remete a um dia de sabado \n\n");
        break;
        
        case 7:
        printf("\n\n Este dia remete a um dia de domingo \n\n");
        break;

       default:
       printf("\n\nNAO EXISTE NENHUM DIA NA SEMANA\n\n");


    }
    
    return 0;
}


