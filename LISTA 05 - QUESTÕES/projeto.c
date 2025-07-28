#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define INF 999999

int numCidades;
char cidades[MAX][50];
int adj[MAX][MAX], dist[MAX][MAX], pred[MAX][MAX];

// Função para inicializar matrizes
void inicializarMatrizes() {
    for (int i = 0; i < numCidades; i++) {
        for (int j = 0; j < numCidades; j++) {
            if (i == j)
                adj[i][j] = dist[i][j] = 0;
            else
                adj[i][j] = dist[i][j] = INF;
            pred[i][j] = -1;
        }
    }
}

// Floyd-Warshall
void floydWarshall() {
    for (int i = 0; i < numCidades; i++)
        for (int j = 0; j < numCidades; j++) {
            dist[i][j] = adj[i][j];
            if (adj[i][j] != INF && i != j)
                pred[i][j] = i;
        }

    for (int k = 0; k < numCidades; k++)
        for (int i = 0; i < numCidades; i++)
            for (int j = 0; j < numCidades; j++)
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    pred[i][j] = pred[k][j];
                }
}

// Mostrar matriz
void mostrarMatriz(int matriz[MAX][MAX]) {
    printf("\n\t");
    for (int i = 0; i < numCidades; i++)
        printf("%s\t", cidades[i]);
    printf("\n");

    for (int i = 0; i < numCidades; i++) {
        printf("%s\t", cidades[i]);
        for (int j = 0; j < numCidades; j++) {
            if (matriz[i][j] == INF)
                printf("INF\t");
            else
                printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

// Mostrar caminho mínimo entre duas cidades
void mostrarCaminho(int origem, int destino) {
    if (dist[origem][destino] == INF) {
        printf("Não existe caminho entre %s e %s.\n", cidades[origem], cidades[destino]);
        return;
    }

    int caminho[MAX], tam = 0, atual = destino;

    while (atual != origem) {
        caminho[tam++] = atual;
        atual = pred[origem][atual];
    }
    caminho[tam++] = origem;

    printf("Caminho: ");
    for (int i = tam - 1; i >= 0; i--) {
        printf("%s", cidades[caminho[i]]);
        if (i > 0) printf(" -> ");
    }
    printf("\nCusto total: %d\n", dist[origem][destino]);
}

// Salvar dados
void salvarArquivo(char *nome) {
    FILE *f = fopen(nome, "w");
    fprintf(f, "%d\n", numCidades);
    for (int i = 0; i < numCidades; i++)
        fprintf(f, "%s\n", cidades[i]);

    for (int i = 0; i < numCidades; i++)
        for (int j = 0; j < numCidades; j++)
            fprintf(f, "%d ", adj[i][j]);
    fclose(f);
    printf("Dados salvos com sucesso!\n");
}

// Carregar dados
void carregarArquivo(char *nome) {
    FILE *f = fopen(nome, "r");
    if (!f) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fscanf(f, "%d\n", &numCidades);
    for (int i = 0; i < numCidades; i++)
        fgets(cidades[i], sizeof(cidades[i]), f), cidades[i][strcspn(cidades[i], "\n")] = 0;

    for (int i = 0; i < numCidades; i++)
        for (int j = 0; j < numCidades; j++)
            fscanf(f, "%d", &adj[i][j]);

    fclose(f);
    printf("Dados carregados com sucesso!\n");
}

// Menu principal
int main() {
    int opcao, origem, destino;
    char nomeArquivo[100];

    do {
        printf("\n=== MENU ===\n");
        printf("1. Inserir dados\n");
        printf("2. Executar Floyd-Warshall\n");
        printf("3. Mostrar matriz de distâncias\n");
        printf("4. Mostrar matriz de predecessores\n");
        printf("5. Ver caminho entre cidades\n");
        printf("6. Salvar dados\n");
        printf("7. Carregar dados\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Quantas cidades? ");
                scanf("%d", &numCidades);
                getchar();
                inicializarMatrizes();

                for (int i = 0; i < numCidades; i++) {
                    printf("Nome da cidade %d: ", i + 1);
                    fgets(cidades[i], sizeof(cidades[i]), stdin);
                    cidades[i][strcspn(cidades[i], "\n")] = 0;
                }

                for (int i = 0; i < numCidades; i++) {
                    for (int j = 0; j < numCidades; j++) {
                        if (i == j) continue;
                        printf("Distância de %s para %s (INF = -1): ", cidades[i], cidades[j]);
                        int d;
                        scanf("%d", &d);
                        adj[i][j] = (d == -1) ? INF : d;
                    }
                }
                break;

            case 2:
                floydWarshall();
                printf("Algoritmo executado com sucesso!\n");
                break;

            case 3:
                mostrarMatriz(dist);
                break;

            case 4:
                mostrarMatriz(pred);
                break;

            case 5:
                printf("Origem (0 a %d): ", numCidades - 1);
                scanf("%d", &origem);
                printf("Destino (0 a %d): ", numCidades - 1);
                scanf("%d", &destino);
                mostrarCaminho(origem, destino);
                break;

            case 6:
                printf("Nome do arquivo: ");
                scanf("%s", nomeArquivo);
                salvarArquivo(nomeArquivo);
                break;

            case 7:
                printf("Nome do arquivo: ");
                scanf("%s", nomeArquivo);
                carregarArquivo(nomeArquivo);
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
