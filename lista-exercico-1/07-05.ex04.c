#include <stdio.h>
int main(void){

 int idade;
  printf("\n ----> Digite a sua idade:\n");
  scanf("%i", &idade);

  if ( idade < 5)
  {
     printf("*MENSAGEM DO SISTEMA : NÃO EXISTE NENHUNHA CATEGORIA PARA A SUA IDADE!");
  } else if (idade >= 5 &&  idade <= 7){
    printf(" VOCE PERTENCE A CATEGORIA infantil  A");

  } else if (idade >= 8 && idade <= 10){
    printf(" VOCE PERTENCE A CATEGORIA  inffantil B");

  } else if (idade >= 11 && idade <= 13){
    printf("  VOCE PERTENCE A CATEGORIA JUVENIL A");

  } else if (idade >= 14 && idade <= 17){
    printf("  VOCE PERTENCE A CATEGORIA JUVENIL B");

  } else if ( idade >= 18){
    printf("VOCE PERTENCE A CATEGORIA SENIOR");
  } else {
    printf(" *MENSAGEM DO SISTEMA*, NÃO EXISTE NENHUMA CATEGORIA PARA A SUA IDADE!!");

  }




    return 0;
}