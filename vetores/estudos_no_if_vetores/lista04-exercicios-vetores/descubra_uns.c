#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N_COLUNAS 10
#define N_LNHAS  10
int main(){
    srand(time(NULL));
    int tabuleiro[N_LNHAS][N_COLUNAS];
    int numero_tentativas = 0;
    int numeros_encontrados = 0;
    int modo_de_jogo;
    printf("\n===== SEJA BEM VINDO AO JOGO DESCUBRA UNS ====\n");
    printf("\n ---- ESCOLHA O MODO DE JOGO ---- \n");
    printf("\n1 - JOGADOR \n");
    printf("\n2 - JOGADORES\n");
    printf("\nDIGITE O MODO DA SUA PREFERENCIA\n");
    scanf("%d", &modo_de_jogo);

    
    for (int i = 0; i < N_LNHAS; i++)
    {
        for (int j = 0; j < N_COLUNAS; j++)
        {
          printf("%d ", tabuleiro[i][j]);
        }
        printf("\n\n");
    }
    int colocados = 0;
   while (colocados < 10)
    {
        int linha = rand() % N_LNHAS;
        int coluna =  rand() % N_COLUNAS;
        if (tabuleiro[linha][coluna] == 0)
        {
              tabuleiro[linha][coluna] = 1;
           colocados++;
        }
    }
   printf("---TABULEIRO---");
   for (int i = 0; i < N_LNHAS; i++)
   {
    for (int j = 0; i < N_COLUNAS; i++)
    {
        printf("%d ", tabuleiro[i][j]);
    }
     printf("\n\n");
   }
   if (modo_de_jogo == 1)
   {
    int numero_tentativas = 0;
    int numeros_encontrados = 0;
     printf("\nSEJA BEM VINDO AO TABULEIRO\n");
     while (numeros_encontrados < 5)
     {
        int linhas;
        int colunas;
        printf("\nDIGITE O NUMERO DA LINHA DE 1 A 10\n");
    scanf("%d", &linhas);
 printf("\nDIGITE O NUMERO DE COLUNAS DE 1 A 10\n");
    scanf("%d", &colunas);
     linhas--;
     colunas--;
      if (linhas < 0 || linhas >= N_LNHAS || colunas < 0 || colunas >= N_COLUNAS)
    {
        printf("\nA POSICAO EH INVALIDA, TENTE DENOVO!!\n");
        continue;
    }
     numero_tentativas++;
     if (tabuleiro[linhas][colunas] == 1)
     {
        printf("\nVoce achou um numero 1!, PARABENS PRA VC!\n");
        numeros_encontrados++;
        tabuleiro[linhas][colunas] = 2;
     } else if (tabuleiro[linhas][colunas] == 2){
        printf("\nQue Penaa!, ja existe esta posicao no tabuleiro.....\n");
        continue;
     } else {
        printf("\nMAS RAPAZ, NAO EXISTE UM NUMERO 1 NESTA POSICAO...\n");
     }
     
     }
      printf("\nNeste Jogo, voce encontrou 5 uns em %d tentativas ao todo\n", numero_tentativas);
       } else if (modo_de_jogo == 2){
         int encontrados_modo_01 = 0, encontrados_modo_02 = 0;
         int tentativas1 = 0, tentativas2 = 0;
         int jogador = 1;
         printf("\nSEJA VINDO AO SEGUNDO MODO DE JOGO DO TABULEIRO ----\n");
         while (encontrados_modo_01 < 5 && encontrados_modo_02 < 5){
             int linhas;
             int colunas;
             printf("\nJogador %d, digite o numero da linha de 1 ate 10\n", jogador);
             scanf("%d", &linhas);
             printf("\nJogador %d, digite o numero da colunas de 1 ate 10\n", jogador);
             scanf("%d", &colunas);
             linhas--;
              colunas--;
       
           if (linhas < 0 || linhas >= N_LNHAS || colunas < 0 || colunas >= N_COLUNAS)
           {
            printf("\nVIXXX, a sua posicao eh invalida hein!! , mas tente denovo...\n");
             continue;
           } 
          if (tabuleiro[linhas][colunas] == 1)
          {
            printf("\nEIIII, o jogador numero um (01), ja encontrou um numero 1 viu!\n", jogador);
            if (jogador == 1) encontrados_modo_01++;
            else encontrados_modo_02++;
            tabuleiro[linhas][colunas] = jogador == 1 ? 3 : 4;
          } else if (tabuleiro[linhas][colunas] == 3 || tabuleiro[linhas][colunas] == 4){
            printf("\nIXI, ja existe essa posicao no tabuleiro hein!\n");
            continue;
          } else {
            printf("\n Nao existe um 1 nesta referida posicao\n");
          }
            if (jogador == 1) tentativas1++;
            else tentativas2++;

            jogador = (jogador == 1) ? 2 : 1;
         } 
           if (encontrados_modo_01 == 5)
            printf("\nCHEGAMOS AO FIM, o Jogador numero 1 venceu com %d tentativas!\n", tentativas1);
             else 
             printf("\nChegamos ao fim: O jogador numero 2 venceu com %d tentativas!\n", tentativas2);
        } else {
            printf("\nMODO INVALIDO\n");
        }

      return 0;
    }

