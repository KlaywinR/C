#include <stdio.h>
int main(void){
int idade = 0;
 
printf("DIGITE A SUA IDADE: "); scanf("%i", &idade);

if (idade >= 18)
{
    printf("APROVADO");
} else {
    printf("IDADE INVALIDA");
};

    return 0;

}



