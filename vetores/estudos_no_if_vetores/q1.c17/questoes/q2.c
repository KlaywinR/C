#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
  int n_alunos;
  printf("numero total de alunos");
  scanf("%i", &n_alunos);
  if (n_alunos > 0)
  {
    float nota1[n_alunos];
    float nota2[n_alunos];
    float medias[n_alunos];
    float media_geral = 0;
    for (int i = 0; i < n_alunos; i++)
    {
      nota1[i] = 10 * (rand() / (float)RAND_MAX);
      nota2[i] = 10 * (rand() / (float)RAND_MAX);
      medias[i] = (nota1[i] + nota2[i]) / 2;
    }
  }
  else
  {
    printf("\n ERRO");
  }

  return 0;
}