#include <stdio.h>
int main(){
    #define misto 5
    #define cheese_burguer 10
    #define copo_suco 6
    #define refrigerante 3.5
    #define TRUE 1

    float valor_conta = 0;
    int produto_escolhido;

    while (TRUE)
    {
        printf("\n============== NOSSO MENU ================\n");
        printf("\n[1] NOSSO MISTO QUENTE --- 5,00");
        printf("\n[2] NOSSO CHEESE BURGUER --- 10,00 ");
        printf("\n[3] NOSSO SUCO --- 6,00");
        printf("\n[4] NOSSO REFRIGERANTE --- 3,50");
        printf("\n[0] ENCERRANDO A SUA COMPRA\n");
        printf("=====================================");
        printf("\nSELECIONE O PRODUTO QUE DESEJA:\n");
        scanf("%2.lf", &produto_escolhido);

        switch (produto_escolhido)
        {
        case 1:
            valor_conta += 5;
            break;
        case 2:
            valor_conta += 10;
            break;
        case 3:
            valor_conta += 6;
            break;
        case 4:
            valor_conta += 3.5;
            break;
        case 0:
            if (valor_conta > 0)
            {
                printf("O valor da conta deu: %.2f\n", valor_conta);
            }
            return 0;
        default:
            printf("\n ESTE ITEM NAO ESTA PRESENTE NO NOSSO MENU!");
            break;
        }
    }