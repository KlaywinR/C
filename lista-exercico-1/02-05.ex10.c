#include <stdio.h>

int main(void){

 //Desenvolva um programa em linguagem C que leia o percurso em quilômetros, o tipo do carro e
//informe o consumo estimado de combustível, sabendo-se que um carro tipo C faz 12 km com um
//litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro.
   float  percurso, consumo;
   char tipo;

   //entrada de dados//
   printf("\n\n\n\nDIGITE A QUILOMETRAGEM: ");
   scanf("%f", &percurso);
   
   printf("\n\n\n\nDIGITE O TIPO DE CARRO ---> A ,B ou C: ");
   scanf("%c", &tipo);

 switch (tipo)
 {
 case 1:
     case 'A':
     case 'a':
     consumo = percurso / 12.0;
    break;
     

    case 2:
     case 'B':
     case 'b':
     consumo = percurso / 9.0;
    break;

    case 3:
    case 'C':
    case 'c':
    consumo = percurso / 8.0;
   break;
   
   default:
    printf("\n\n\nCarro Inválido\n\n\n");
    return 1;
 }

 printf("\n\n\nO consumo estimado de combustível é de %.2f litros.\n", consumo);

 return 0;
 
 }











































    return 0;
}