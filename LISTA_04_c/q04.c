/*
Crie um programa em linguagem C que receba a temperatura média de cada mês do ano e armazene
essas temperaturas em um vetor. Em seguida, o seu programa deve determinar e imprimir em tela
a maior e a menor temperatura do ano e em que mês estas temperaturas aconteceram.
*/
#include <stdio.h>
#include <string.h>
#define MESES_DO_ANO 12
int main()
{    
    float temperatura_dos_meses[MESES_DO_ANO];
    char *nome_meses[MESES_DO_ANO] = {
        "janeiro", "fevereiro", "marco", "abril",
        "maio", "junho", "julho", "agosto", "setembro",
        "outubro", "novembro", "dezembro"
};    
int i;
int mes_menor = 0, mes_maior = 0;
float maior_temperatura, menor_temperatura;

printf("DIGITE A TEMPERATURA DE CADA MES AO ANO: ");
for (int i = 0; i < MESES_DO_ANO; i++)
{
    printf("%s", nome_meses[i]);
    scanf("%f", &temperatura_dos_meses[i]);
}

maior_temperatura = menor_temperatura = temperatura_dos_meses[0];
 for (i = 1; i < MESES_DO_ANO; i++) {
        if (temperatura_dos_meses[i] > maior_temperatura) {
            maior_temperatura = temperatura_dos_meses[i];
            mes_maior = i;
        }
        if (temperatura_dos_meses[i] < menor_temperatura) {
            menor_temperatura = temperatura_dos_meses[i];
            mes_menor = i;
        }
    }
     printf("\nMaior temperatura: %.2f°C em %s\n", maior_temperatura, nome_meses[mes_maior]);
    printf("Menor temperatura: %.2f°C em %s\n", menor_temperatura, nome_meses[mes_menor]);


return 0;
}