#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define INF 999999

int n = 0;
char cidades[MAX][100];
int adj[MAX][MAX];
int dist[MAX][MAX];
int pred[MAX][MAX];
int dadosCarregados = 0;
int algoritmoExecutado = 0;

// Funções principais

void inicializarMatrizes() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            dist[i][j] = adj[i][j];
            if (i == j)
                pred[i][j] = i;
            else if (adj[i][j] != INF)
                pred[i][j] = i;
            else
                pred[i][j] = -1;
        }
}

void floydWarshall() {
    inicializarMatrizes();
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    pred[i][j] = pred[k][j];
                }
    algoritmoExecutado = 1;
    printf("O ALGORITMO FOI EXECUTADO.\n");
}

void imprimirMatriz(int matriz[MAX][MAX], const char *titulo) {
    printf("\n%s:\n", titulo);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == INF)
                printf("INF ");
            else
                printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}




void salvarDados(const char *arquivo) {
    //FILE *f = fopen("dados.txt", "w");
    FILE *f = fopen(arquivo, "w");
    if (!f) {
        printf("Erro ao salvar arquivo\n");
        return;
    }
    fprintf(f, "%d\n", n);
    for (int i = 0; i < n; i++)
        fprintf(f, "%s\n", cidades[i]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            fprintf(f, "%d\n", adj[i][j]);
    fclose(f);
    printf("Os dados foram salvos com sucesso em: %s\n", arquivo);
}

int carregarDados(const char *arquivo) {
    FILE *f = fopen(arquivo, "r");
    if (!f) {
        printf("Erro ao abrir arquivo.\n");
        return 0;
    }
    fscanf(f, "%d\n", &n);
    for (int i = 0; i < n; i++) {
        fgets(cidades[i], 100, f);
        cidades[i][strcspn(cidades[i], "\n")] = 0;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            fscanf(f, "%d", &adj[i][j]);
    fclose(f);
    dadosCarregados = 1;
    printf("Os dados foram carregados com sucesso: %s\n", arquivo);
    return 1;
}

void salvarResultados(const char *arquivo) {
    FILE *f = fopen(arquivo, "w");
    if (!f) {
        printf("Erro ao salvar resultados.\n");
        return;
    }
    fprintf(f, "MATRIZ DE DISTANCIAS:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            fprintf(f, "%d ", dist[i][j]);
        fprintf(f, "\n");
    }

    fprintf(f, "\n MATRIZ DE PREDECESSORES:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            fprintf(f, "%d ", pred[i][j]);
        fprintf(f, "\n");
    }
    fclose(f);
    printf("OS RESULTADOS FORAM SALVOS NO ARQUIVO:  %s\n", arquivo);
}

void mostrarCaminho(int origem, int destino) {
    if (pred[origem][destino] == -1) {
        printf("EITA, NAO EXISTE CAMINHO PARA ESSE LUGAR.\n");
        return;
    }
    int caminho[MAX], tam = 0, atual = destino;
    while (atual != origem) {
        caminho[tam++] = atual;
        atual = pred[origem][atual];
    }
    caminho[tam++] = origem;

    printf("CAMINHO: ");
    for (int i = tam - 1; i >= 0; i--) {
        printf("%s", cidades[caminho[i]]);
        if (i > 0)
            printf(" -> ");
    }
    printf("\n");
}

// Menus

void menuEntradaDados() {
    int opcao;
    printf("\n--- MENU DE DADOS ---\n");
    printf("1 - INSERIR TODOS OS DADOS MANUALMENTE\n");
    printf("2 - CARREGAR TODOS OS DADOS DO ARQUIVO(dados.txt)\n");
    printf("SUA ESCOLHA: ");
    scanf("%d", &opcao);
    getchar();

    if (opcao == 1) {
        printf("Numero de cidades: ");
        scanf("%d", &n);
        getchar();
        for (int i = 0; i < n; i++) {
            printf("O Nome da cidade %d: ", i);
            fgets(cidades[i], 100, stdin);
            cidades[i][strcspn(cidades[i], "\n")] = 0;
        }
        printf("Digite a matriz de adjacencia - cidades infinitas serao iguais ah 99999:\n");
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) {
                printf("De %s para %s: ", cidades[i], cidades[j]);
                scanf("%d", &adj[i][j]);
            }
        dadosCarregados = 1;
        salvarDados("dados.txt");
    } else if (opcao == 2) {
        carregarDados("dados.txt");
    } else {
        printf("Opcao invalida.\n");
    }
}

void menuVisualizarMatrizes() {
    if (!algoritmoExecutado) {
        printf("POR FAVOR, FACA O ALGORITMO DE FLOYD-WARSHALL PRIMEIRO.\n");
        return;
    }
    int opcao;
    printf("\n--- TODAS AS MATRIZES DISPONÍVEIS ---\n");
    printf("1 - A Matriz de Adjacencia\n");
    printf("2 - A Matriz de Distancias Minimas\n");
    printf("3 - A Matriz de Predecessores\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: imprimirMatriz(adj, "Matriz de Adjacencia"); break;
        case 2: imprimirMatriz(dist, "Matriz de Distancias Minimas"); break;
        case 3: imprimirMatriz(pred, "Matriz de Predecessores"); break;
        default: printf("Opcao invalida.\n");
    }
}

void menuConsultaCaminho() {
    if (!algoritmoExecutado) {
        printf("POR FAVOR, FACA O ALGORITMO DE FLOYD-WARSHALL PRIMEIRO\n");
        return;
    }
    printf("TODAS AS CIDADES DISPONIVEIS:\n");
    for (int i = 0; i < n; i++)
        printf("%d - %s\n", i, cidades[i]);

    int origem, destino;
    printf("ESCOLHA O NUMERO DA CIDADE DE PARTIDA: ");
    scanf("%d", &origem);
    printf("ESCOLHA O NUMERO DA CIDADE DE IDA: ");
    scanf("%d", &destino);

    if (origem < 0 || origem >= n || destino < 0 || destino >= n) {
        printf("ESTES INDICES SAO INVALIDOS.\n");
        return;
    }

    if (dist[origem][destino] == INF)
        printf("NAO EXISTE CAMINNHO PARA ESTE LUGAR.\n");
    else {
        printf("O CUSTO TOTAL EH: %d\n", dist[origem][destino]);
        mostrarCaminho(origem, destino);
    }
}

// Programa principal

int main() {
    int opcao;

    while (1) {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1 - Inserir ou carregar dados\n");
        printf("2 - Executar algoritmo de Floyd-Warshall\n");
        printf("3 - Visualizar matrizes\n");
        printf("4 - Consultar menor caminho\n");
        printf("5 - Salvar resultados em arquivo\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: menuEntradaDados(); break;
            case 2:
                if (!dadosCarregados)
                    printf("Carregue os dados primeiro.\n");
                else floydWarshall();
                break;
            case 3: menuVisualizarMatrizes(); break;
            case 4: menuConsultaCaminho(); break;
            case 5:
                if (!algoritmoExecutado)
                    printf("Execute o algoritmo primeiro.\n");
                else salvarResultados("resultados.txt");
                break;
            case 0: printf("Encerrando...\n"); return 0;
            default: printf("Opcao invalida.\n");
        }
    }

    return 0;
}
