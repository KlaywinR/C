// nesta questao tive a ajuda de tiago &  maicon
#include <stdio.h>
int main(void){
    char nomedoatleta01[50], nomedoatleta02[50], nomedoatleta03[50];
      int primeiros_minutos, primeiros_segundos, primeiros_centesimos;
    int segundo01, segundo02, segundo03;
          int segundo_total01, segundo_total02, segundos_total03;

    printf("\n DIGITE AQUI O PRIMEIRO NOME DO ATLETA:");
    scanf("%s", &nomedoatleta01);
            printf("\n digite em seegundos, minutos e centesimos o tempo do primeiro atleta\n:    ");
        printf("\n minutos");
         scanf("%d", &primeiros_minutos);
           printf("\n segundos");
            scanf("%d", &primeiros_segundos);
      printf("\n centesimos");
         scanf("%d", &primeiros_centesimos);

         segundo01 = (primeiros_minutos * 60) + primeiros_segundos;
           segundo_total01 = (segundo01 * 100) + primeiros_centesimos;

    printf("\n DIGITE AQUI O NOME DO SEGUNDO ATLETA: ");
    scanf("%s", nomedoatleta02);
         printf("\n digite em seegundos, minutos e centesimos o tempo do segundo atleta\n:    ");
         printf("\n minutos");
       scanf("%d", &primeiros_minutos);
        printf("\n segundos:  ");
        scanf("%d", &primeiros_segundos);
      printf("\n centesimos: ");
       scanf("%d", &primeiros_centesimos);

       segundo02 = (primeiros_minutos * 60) + primeiros_segundos;
       segundo02 = (segundo02 * 100) + primeiros_centesimos;


    printf("\n DIGITE AQUI O NOME DO TERCEIRO ATLETA: ");   
    scanf("%s", &nomedoatleta03);
         printf("\n digite em segundos, minutos e centesimos o tempo do segundo atleta\n:    ");
           printf("\n minutos");
            scanf("%d", &primeiros_minutos);
            printf("\n segundos:  ");
        scanf("%d", &primeiros_segundos);
      printf("\n centesimos: ");
       scanf("%d", &primeiros_centesimos);

       segundo03 = (primeiros_minutos * 60) + primeiros_segundos;
       segundos_total03 = (segundo03 * 100 ) + primeiros_centesimos;

       printf("\n\n\n\n");
        printf(" o nome do primeiro atelta e : %s\n", nomedoatleta01);
        printf(" o nome do segundo atelta e : %s\n", nomedoatleta02);
        printf(" o nome do terceiro atelta e : %s\n", nomedoatleta03);
    printf("\n\n\n");
    printf(" o tempo total do primeiro atleta e : %d segundos e %d centesimos\n", segundo01, primeiros_centesimos);
      printf(" o tempo total do segundo atleta e : %d segundos e %d centesimos\n", segundo01, primeiros_centesimos);
        printf(" o tempo total do terceiro atleta e : %d segundos e %d centesimos\n", segundo01, primeiros_centesimos);
         printf("\n\n");
         if ( segundo_total01 < segundo_total02 && segundo_total01 < segundos_total03) {
          printf(" o primeiro atleta foi o vencedorr\n");
          printf(" o segundo atletaficoou em segundo lugar\n");
           printf(" o terceiro atleta ficou em terceiro lugar\n");
         } else if (segundo_total01 > segundo_total02 && segundo_total01 < segundos_total03) {
             printf(" o primeiro atleta foi o vencedorr\n");
             printf(" o segundo atleta ficou em segundo lugar\n");
             printf(" o terceiro atleta ficou em terceiro lugar\n");
                       } else if (segundo_total01 > segundo_total02 && segundo_total01 > segundos_total03) {
            printf(" o primeiro atleta foi o vencedorr\n");
            printf(" o segundo atleta ficou em segundo lugar\n");
            printf(" o terceiro atleta ficou em terceiro lugar\n");
                       } else if (segundo_total02 > segundo_total01 && segundo_total01 < segundos_total03){
            printf(" o segundo atleta foi o vencedor\n");
            printf("\n o primeiro atleta ficou em segundo lugar!\n");
            printf("o terceiro atleta ocupa a terceira posicao\n");
                      } else if ( segundo_total02 > segundo_total01 && segundo_total02 < segundos_total03) {
          printf("o segundo atleta ganhoou!\n");
          printf("\n o primeiro atlet ficou em segundo lugar!!");
          printf(" o terceiro atleta ficou em terceiro lugar!!");
     
                } else if( segundo_total02 > segundo_total01 && segundo_total02 > segundos_total03) {
             printf("o segundo atleta ganhoou!\n");
          printf("\n o primeiro atlet ficou em segundo lugar!!");
          printf(" o terceiro atleta ficou em terceiro lugar!!");

        } else if (segundos_total03 < segundo_total01 && segundos_total03 < segundo_total02){
               printf("o terceiro atleta ganhoou!\n");
          printf("\n o primeiro atlet ficou em segundo lugar!!");
          printf(" o segundo atleta ficou em terceiro lugar!!");
        } else if (segundos_total03 > segundo_total01 && segundos_total03 < segundo_total02){
                  printf("o terceiro atleta ganhoou!\n");
          printf("\n o primeiro atlet ficou em segundo lugar!!");
          printf(" o segundo atleta ficou em terceiro lugar!!");
        } else if( segundos_total03 > segundo_total01 && segundos_total03 > segundo_total02){
                     printf("o terceiro atleta ganhoou!\n");
          printf("\n o primeiro atlet ficou em segundo lugar!!");
          printf(" o segundo atleta ficou em terceiro lugar!!");
        } else {
            printf(" empate");

        }
        if (segundo_total01 < 8700) {
            printf ("\n o recorde foi quebrado pelo primeiro competidor\n");
        } else if (segundo_total02 < 8700) {
             printf ("\n o recorde foi quebrado pelo segundo competidor\n");
        } else  if  (segundos_total03 < 8700) {
             printf ("\n o recorde foi quebrado pelo primeiro competidor\n");
        } else{
           printf ("\n ngm quebrou o recorde geral\n");
        }
         printf("\n\n");
         printf("o tempo do primeiro competidor  foi de %d segundos %d centesimos e %d minutos\n", segundo01, primeiros_centesimos, primeiros_minutos);
          printf("o tempo do segundo competidor  foi de %d segundos %d centesimos e %d minutos\n", segundo02, primeiros_centesimos, primeiros_minutos);
           printf("o tempo do terceiro competidor  foi de %d segundos %d centesimos e %d minutos\n", segundo03, primeiros_centesimos, primeiros_minutos);

        printf(" obg por usar o software!");
    return 0;
}