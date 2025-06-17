#include <stdio.h>
int main(void)
{
    float altura[9] = {};
    int altura_das_pessoas;

    for (altura_das_pessoas = 0;  altura_das_pessoas <= 8; altura_das_pessoas++)
    {
        printf(" \nDIGITE A SUA ALTURA AQUI\n :   ");
        scanf("%.2f", altura[altura_das_pessoas]);
    }
    for (altura_das_pessoas = 0; altura_das_pessoas <= altura_das_pessoas; altura_das_pessoas++)
    {
          scanf("%f", altura[altura_das_pessoas]);
        printf(" A SUA ALTURA EH [%d]",altura_das_pessoas, altura[altura_das_pessoas]);
    }

       return 0;
    }
    

