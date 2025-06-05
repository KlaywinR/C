#include <stdio.h>
int main(void){
  
    int voto;
    int totalvotos = 0;
    int votos_feltrano = 0;
     int votos_ciclano = 0;
     int votos_beltrano = 0;
     int votosnulos = 0;
     int votosbrancos = 0;

     votos_beltrano = votos_ciclano, votos_feltrano = 0;
     votosbrancos = votosnulos = 0;

     do
     {
    printf("\n  ********** NOSSOS CANDIDATOS ************");
    printf("\n CANDIDATO 01 -  FELTRANO DA SILVA   22");
    printf("\n CANDIDATO 02 - CICLANO RODRIGUES    76");
    printf("\n CANDIDATO 03 - BELTRANO FELIX       46");
    printf("\n CANDIDATO 04 - VOTO EM NULO        100");
    printf("\n                VOTO BRANCO           0");
    printf("\n #########################################\n");
    printf("\n DIGITE O SEU VOTO : ");
    scanf("%i",&voto);
    if (voto >= 0)
    {
        totalvotos++;
    }
    
    totalvotos++;
     printf("\n #########################################\n");
    
       
        
       switch (voto)
       {
    case 22:
      votos_feltrano++;
        break;

    case 76:
     votos_ciclano++;
        break;

    case 46:
        break;   
    case 100: 
      break;
   
       default:
         if(voto > 0){
            votosnulos++;
         }
        break;
       }
     } while (voto >= 0);

       


    
    return 0;
}