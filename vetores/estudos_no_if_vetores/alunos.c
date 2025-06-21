/*
    Elabore um programa em C que receba e armazene duas notas de alunos de uma turma de N alunos. Após este procedimento, calcule e armazene a média aritmética de cada um dos alunos e a média geral da turma. Gere as notas dos alunos de maneira aleatória. As notas são dadas entre 0 e 10 com casas decimais.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n_alunos;
    
    printf(" -> Numero de alunos: ");
    scanf("%i",&n_alunos);

    if(n_alunos > 0) {
        float notas1 [n_alunos];
        float notas2 [n_alunos];
        float medias [n_alunos];
        
        float media_geral = 0;
        
        for(int i = 0; i < n_alunos; i++) {
            notas1[i] = 10 * (rand() / (float) RAND_MAX);
            notas2[i] = 10 * (rand() / (float) RAND_MAX);

            medias[i] = (notas1[i] + notas2[i]) / 2;
            media_geral += medias[i] / n_alunos;

            printf("\n\n ##### ALUNO %i #####", i);
            printf("\n  -> Nota 1: %.2f", notas1[i]);
            printf("\n  -> Nota 2: %.2f", notas2[i]);
            printf("\n  -> Media: %.2f", medias[i]);
         }

         printf("\n\n Media Geral: %.2f", media_geral);
    } else {
        printf("\n # ERRO: numero de alunos invalido!");
    }



    

    return 0;
}