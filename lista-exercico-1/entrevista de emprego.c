#include <stdio.h>
int main(void)
{
#define candidatos 4
    for (int i = 0; i <= candidatos; i++)
    {

        char fale_um_pouco_sobre_voce[200];
        char quais_sao_os_pontos_fortes_q_vc_tem[200];
        char quais_sao_oss_que_vc_podemelhorar[3500];
        char idade[2];
        char peso[4];
        char formacao_academica[450];
        char trajetoria_profissional[600];
        char experiencia_antiga_e_adquirida[700];

        printf("Fale um pouco sobre a sua pessoa\n");
        scanf(" %[^\n]", fale_um_pouco_sobre_voce);

        printf(" QUAIS SAO OS TEUS PONTOS FORTES?\n");
        scanf(" %[^\n", quais_sao_os_pontos_fortes_q_vc_tem);
        printf(" QUAIS SAO OS QUE PODEM MELHORAR?\n");
        scanf(" %[^\n]", quais_sao_oss_que_vc_podemelhorar);
        printf(" A SUA IDADE EH DE: ");
        scanf(" %[^\n]", idade);
        printf(" QUAL O SEU PESO EM KG:   ");
        scanf(" %[^\n]", peso);
        printf(" QUAL A SUA FORMACAOO ACADEMICA?");
        scanf(" %[^\n]", formacao_academica);
        printf("QUAL A SUA TRAJETORIA PROFISSIONAL ATE AGORA?");
        scanf(" %[^\n]", trajetoria_profissional);
        printf(" QUAL A SUA EXPERIENCIA ADQUIRIDA DURANTE ESSES TEMPOS?");
        scanf(" %[^\n]", experiencia_antiga_e_adquirida);

        printf("\n-------SEUS DADOS COLETADOS---------\n");
        printf(" seu resumo sobre pessoa eh: %s\n", fale_um_pouco_sobre_voce);
        printf(" seus pontos fortes: %s\n", quais_sao_os_pontos_fortes_q_vc_tem);
        printf(" OS QUE POSSO MELHORAR AO LONGO DO TEMPO: %s\n", quais_sao_oss_que_vc_podemelhorar);
        printf("  A SUA IDADE DITA POR VOCE EH: %s\n", idade);
        printf(" O SEU PESO DITO POR VOCE EH DE : %s\n", peso);
        printf(" A SUA FORMAÇÃO ACADEMICA EH: %s\n", formacao_academica);
        printf(" MINHA TRAJETORIA PROFISSIONAL EH : %s\n", trajetoria_profissional);
        printf(" MINHA EXPERIENCIA ADQUIRIDA FOI: %s\n", experiencia_antiga_e_adquirida);
        printf("---------------------------------------------");
    }

    return 0;
}