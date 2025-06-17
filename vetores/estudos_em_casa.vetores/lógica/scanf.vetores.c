#include <stdio.h>
int main(void)
{

    float notas_dos_alunos[6];
    int notas_gerais;
    for (notas_gerais = 0; notas_gerais <= 5; notas_gerais++)
    {

        printf(" DIGITE AS 6 NOTAS DOS SEUS ALUNOS: ");
        scanf("%f", &notas_dos_alunos[notas_gerais]);
     
    } 
    for (notas_gerais = 0; notas_gerais <= 5; notas_gerais++)
    {
        printf("\nAS NOTAS DOS SEUS ALUNOS SAO: %.2f\n",notas_gerais, notas_dos_alunos[notas_gerais]);
    }
    
     
    

    return 0;
}