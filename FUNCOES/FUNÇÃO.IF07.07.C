#include <stdio.h>


//PROTÓTIPO DA FUNÇÃO:
 float soma(int num1, int num2);
 ////////////////////////////
 
//DECLARANDO UMA FUNÇÃO//
float soma(int numero1, int numero2)
{
    return numero1 + numero2;
    int soma = numero1 + numero2;
    return numero1 + numero2;
}

#define N_MAX 2
int main(void)
{
    int num1, num2, resultado;
    // repetir a pergunta e resultado 2 vezes! 
    for (int i = 0; i < N_MAX ; i++)
    {        
   puts("digite dois numeros que vc deseja somar: ");
    scanf("%d %d", &num1, &num2);
    resultado = soma(num1, num2);
    printf("%d + %d =  %d\n", resultado);
    }
    return 0;
}