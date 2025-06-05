#include <stdio.h>
int main(void)
{
    char trajetoria_profissional[400];
    char motivo_da_vaga[200];
    char principais_pontos_fortes_do_candidato[400];
    char sua_trajetoria_academica[600];

    printf("CONTE A SUA TRAJETORIA PROFISSIONAL\n");
    scanf(" %[^\n]", trajetoria_profissional);

    printf("\n POR QUAL MOTIVO VOCE SE CANDIDATOU A ESTA VAGA?");
    scanf(" %[^\n]", motivo_da_vaga);

    printf("\n NOS DIGA OS SEUS PRINCIPAIS PONTOS   FORTES:");
    scanf(" %[^\n]", principais_pontos_fortes_do_candidato);

    printf("\n FALE UM POUCO SOBRE A SUA TRAJETORIA ACADEMICA:");
    scanf(" %[^\n]", sua_trajetoria_academica);

    printf("\n________________ SEUS DADOS FORNECIDOS __________________\n");
    printf("A SUA TRAJETORIA PROFISSIONAL EH: %s\n", trajetoria_profissional);
    printf("O MOTIVO DA VAGA EH: %s\n", motivo_da_vaga);
    printf("SEUS PRINCIPAIS PONTOS FORTES SAO: %s\n", principais_pontos_fortes_do_candidato);
    printf("RESUMO DA SUA TRAJETORIA ACADEMICA %s\n", sua_trajetoria_academica);
    printf("\n_________________________________________________________\n");

    return 0;
}