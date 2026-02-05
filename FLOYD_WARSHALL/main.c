#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 100
#define infinit 999.00

int n = 0;
char citys[max][100];
int predecessor_matrix[max][max];
float minimum_distance_matrix[max][max];
float adjacency_matrix[max][max];
int loaded_data = 0;
int algorithm_executed = 0;


void inicialize_matrices();                                              
void floyd_warshall();                                                     
void print_minimum_distance_matrix(float matriz[max][max], const char *titlle);           
void print_predecessor_matrix(int matriz[max][max], const char *titulo); 
void save_data();
int load_data(const char *arquivo);
void save_results(const char *arquivo);
void show_the_way(const int origem, int destino);


void menu_data_entry();
void menu_view_matrix();
void view_way();


int main()
{
    int option;
    do
    {
        printf("\n-- Welcome to main software --");
        printf("\n1 - INSERIR OU CARREGAR DADOS");
        printf("\n2 - EXECUTING FLOYD-WARSHALL");
        printf("\n3 - VER TODAS AS MATRIZES DISPONIVEIS");
        printf("\n4 - CONSULTAR O MENOR CAMINHO");
        printf("\n5 - SALVAR TODOS OS DADOS EM UM ARQUIVO");
        printf("\n0 - QUERO SAIR DO PROGRAMA");
        printf("\nSUA ESCOLHA EH: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            menu_data_entry();
            break;

        case 2:
            if (!loaded_data)
            {
                printf("\nCARREGUE TODOS OS DADOS PRIMEIRO!\n");
            }
            else
            {
                floyd_warshall();
            }
            break;

        case 3:
            menu_view_matrix();
            break;

        case 4:
            view_way();
            break;

        case 5:
            if (!algorithm_executed)
            {
                puts("\nPlease, FACA O ALGORITMO PRIMEIRO!");
            }
            else
            {
                save_results("resultados.txt");
            }
            break;

        case 0:
            puts("\nFINALIZANDO O PROGRAMA...");
            return 0;

        default:
            printf("\nESTA OPCAO EH INVALIDA DENTRO DO PROGRAMA");
        }
    } while (option != 0);

    return 0;
}

void inicialize_matrices()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            minimum_distance_matrix[i][j] = adjacency_matrix[i][j];
            if (i == j)
            {
                predecessor_matrix[i][j] = i;
            }
            else if (adjacency_matrix[i][j] != infinit)
            {
                predecessor_matrix[i][j] = i;
            }
            else
            {
                predecessor_matrix[i][j] = -1;
            }
        }
    }
}


void floyd_warshall()
{
    inicializar_matrizes();
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (minimum_distance_matrix[i][k] + minimum_distance_matrix[k][j] < minimum_distance_matrix[i][j])
                {
                    minimum_distance_matrix[i][j] = minimum_distance_matrix[i][k] + minimum_distance_matrix[k][j];
                    predecessor_matrix[i][j] = predecessor_matrix[k][j];
                }

                algorithm_executed = 1;
            }
        }
    }
    puts("\nO ALGORITMO FOI EXECUTADO!");
}

/*
Esta função irá servir para imprimir a matriz de numeros inteiros na tela, ou seja, as cidades que passarem por qualquer outra das 15 cidades escolhidas, serão ditas como 9999 - de modo geral, infinito.
elementos principais:
const char *titulo = neste caso o titulo será o nome dado a matriz a ser impressa.
*/

void print_minimum_distance_matrix(float matrix[max][max], const char *tittle)
{
    printf("\n%s:\n\n", tittle);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (matrix[i][j] == infinit)
                printf("%7s", "INF");  // 7 posições reservadas
            else
                printf("%7.2f   ", matrix[i][j]); // 7 posições, 2 casas decimais
        }
    printf("\n");
    }
}


void print_predecessor_matrix(int matrix[max][max], const char *titlle)
{
    printf("\n%s:\n\n", titlle);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d  ", matrix[i][j]);
        }
        printf("\n");
    }
}

void save_data()
{
    FILE *f = fopen("dados.txt", "w");
    if (f == NULL)
    {
        puts("ERRO AO ABRIR ESTE ARQUIVO...");
        return;
    }
    fprintf(f, "%i\n", n);
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%s\n", citys[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fprintf(f, "%.2f; ", adjacency_matrix[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
    printf("O ARQUIVO FOI SALVO EM: dados.txt\n");
}


int load_data(const char *arquivo)
{
    FILE *f = fopen(arquivo, "r"); // este "r" serve para o modo de leitura do arquivo.
    if (!f)
    {
        puts("ERRO AO ABRIR ESTE ARQUIVO");
        return 0;
    }

    if (fscanf(f, "%d\n", &n) != 1 || n <= 0)
    {
        puts("\nARQUIVO VAZIO. POR FAVOR, INSIRA OS DADOS MANUALMENTE.");
        fclose(f);
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        fgets(citys[i], 100, f);
        citys[i][strcspn(citys[i], "\n")] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(f, "%f;", &adjacency_matrix[i][j]);
        }
    }
    fclose(f);

    loaded_data = 1;
    printf("\nOs dados foram carregados com sucesso!\n");
    return 1;
}


void save_data(const char *data)
{
    FILE *f = fopen(data, "w");
    if (!f)
    {
        printf("Erro ao salvar resultados.\n");
        return;
    }
    fprintf(f, "MATRIZ DE DISTANCIAS:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fprintf(f, "%.2f; ", minimum_distance_matrix[i][j]);
        }
        fprintf(f, "\n");
    }

    fprintf(f, "\n MATRIZ DE PREDECESSORES:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fprintf(f, "%d ", predecessor_matrix[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
    printf("\nOS RESULTADOS FORAM SALVOS NO ARQUIVO:  %s\n", data);
}


void view_data(int origin, int destination)
{
    if (predecessor_matrix[origin][destination] == -1)
    {
        printf("Mensagem do Sistema: NAO EXISTE CAMINHO PARA ESSE LUGAR.\n");
        return;
    }
    int way[max], tam = 0, actual = destination;
    while (actual != origin)
    {
        way[tam++] = actual;
        actual = predecessor_matrix[origin][actual];
    }
    way[tam++] = origin;

    printf("CAMINHO GERAL: ");
    for (int i = tam - 1; i >= 0; i--)
    {
        printf("%s", citys[way[i]]);
        if (i > 0)
        {
            printf(" --> ");
        }
    }
    printf("\n");
}

void menu_data_entry()
{
    int option;
    printf("\n--- MENU DE DADOS ---\n");
    printf("1 - PREFIRO INSERIR TODOS OS DADOS MANUALMENTE\n");
    printf("2 - PREFIRO CARREGAR TODOS OS DADOS DO ARQUIVO(dados.txt)\n");
    printf("SUA ESCOLHA: ");
    scanf("%d", &option);
    getchar();

    if (option == 1)
    {
        printf("\nDigite o numero de cidades: ");
        scanf("%d", &n);
        getchar();
        for (int i = 0; i < n; i++)
        {
            printf("Name of city %d: ", i);
            fgets(citys[i], 100, stdin);
            citys[i][strcspn(citys[i], "\n")] = 0;
        }
        printf("\nDigite a matriz de adjacencia:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("De %s para %s: ", citys[i], citys[j]);
                scanf("%f", &adjacency_matrix[i][j]);
            }
        }
        loaded_data = 1;
        save_data();
    }
    else if (option == 2)
    {
        carregarDados("dados.txt");
    }
    else
    {
        printf("Invalid Option.\n");
    }
}

void menu_view_matrix()
{
    if (!algorithm_executed)
    {
        printf("\nPOR FAVOR, FACA O ALGORITMO DE FLOYD-WARSHALL PRIMEIRO.\n");
        return;
    }
    int option;
    printf("\n--- TODAS AS MATRIZES DISPONIVEIS ---\n");
    printf("1 - Visualizar a Matriz de Distancias Minimas\n");
    printf("2 - Visualizar a Matriz de Predecessores\n");
    printf("SUA ESCOLHA EH: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        imprimirmatriz_minima(minimum_distance_matrix, "Matriz de Distancias Minimas");
    break;

    case 2:
        imprimirmatriz_predecessor(predecessor_matrix, "\nMatriz de Predecessores");
    break;

    default:
        printf("Mensagem do Sistema: Invalid Option.\n");
    }
}

void view_way()
{
    if (!algorithm_executed)
    {
        printf("POR FAVOR, FACA O ALGORITMO DE FLOYD-WARSHALL PRIMEIRO\n");
        return;
    }
    printf("\nTODAS AS CIDADES DISPONIVEIS:\n");
    for (int i = 0; i < n; i++)
        printf("%d - %s\n", i, citys[i]);

    int origin, destination;
    printf("\nESCOLHA O NUMERO DA CIDADE DE PARTIDA: ");
    scanf("%d", &origin);
    printf("ESCOLHA O NUMERO DA CIDADE DE DESTINO: ");
    scanf("%d", &destination);

    if (origin < 0 || origin >= n || destination < 0 || destination >= n)
    {
        printf("ESTES INDICES SAO INVALIDOS.\n");
        return;
    }

    if (minimum_distance_matrix[origin][destination] == infinit)
    {
        printf("NAO EXISTE UM CAMINHO PARA ESTE LUGAR.\n");
    }
    else
    {
        printf("\nO CUSTO TOTAL EH %.2f QUILOMETROS\n", minimum_distance_matrix[origin][destination]);
        mostrar_caminho(origin, destination);
}
}