// projeto de floyd-warshall - prazo de entrega 10/08.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define max 100
#define infinito 999.00

int n = 0;
char cidades[max][100];
int matriz_predecessores[max][max];
float matriz_distancias_minimas[max][max];
float matriz_de_adjacencia[max][max];
int Dados_carregados = 0;
int algoritmoExecutado = 0;

// todos os procedimentos das funções:
void inicializar_matrizes();                                               // implementada
void floyd_warshall();                                                     // implementada
void imprimirmatriz_minima(float matriz[max][max], const char *titulo);           // implementada
void imprimirmatriz_predecessor(int matriz[max][max], const char *titulo); // implementada
void salvardados();
int carregardados(const char *arquivo);
void salvar_resultados(const char *arquivo);
void mostrar_caminho(const int origem, int destino);

// menus do programa em formato de procedimento:

void menu_entrada_dados();
void menu_ver_matrizes();
void ver_caminho();

// inicio do programa principal:
int main()
{
    int opcao;
    do
    {
        printf("\n-- SEJA BEM VINDO AO NOSSO PROGRAMA PRINCIPAL --");
        printf("\n1 - INSERIR OU CARREGAR DADOS");
        printf("\n2 - EXECUTAR O ALGORITMO FLOYD-WARSHALL");
        printf("\n3 - VER TODAS AS MATRIZES DISPONIVEIS");
        printf("\n4 - CONSULTAR O MENOR CAMINHO");
        printf("\n5 - SALVAR TODOS OS DADOS EM UM ARQUIVO");
        printf("\n0 - QUERO SAIR DO PROGRAMA");
        printf("\nSUA ESCOLHA EH: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            menu_entrada_dados();
            break;

        case 2:
            if (!Dados_carregados)
            {
                printf("\nCARREGUE TODOS OS DADOS PRIMEIRO!\n");
            }
            else
            {
                floyd_warshall();
            }
            break;

        case 3:
            menu_ver_matrizes();
            break;

        case 4:
            ver_caminho();
            break;

        case 5:
            if (!algoritmoExecutado)
            {
                puts("\nPOR FAVOR, FACA O ALGORITMO PRIMEIRO!");
            }
            else
            {
                salvar_resultados("resultados.txt");
            }
            break;

        case 0:
            puts("\nFINALIZANDO O PROGRAMA...");
            return 0;

        default:
            printf("\nESTA OPCAO EH INVALIDA DENTRO DO PROGRAMA");
        }
    } while (opcao != 0);

    return 0;
}

/*
FUNCAO DE INICIALIZAR MATRIZES:
usada para preparar a matriz de distancias minimas e a de predecessores - todos vindos do grafo.
Todos os laços for vão percorrer todos as posições i e j do grafo.
Em resumo, esta função serve para carregar inicialmente o algoritmo de floyd warshall - onde há carregamento das distancias diretas e os predecessores sao definidos com base nas conexões diretas ou ausencia
*/
void inicializar_matrizes()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz_distancias_minimas[i][j] = matriz_de_adjacencia[i][j];
            if (i == j)
            {
                matriz_predecessores[i][j] = i;
            }
            else if (matriz_de_adjacencia[i][j] != infinito)
            {
                matriz_predecessores[i][j] = i;
            }
            else
            {
                matriz_predecessores[i][j] = -1;
            }
        }
    }
}

/*
Função para o algoritmo de floys-warshall:
OBS: os três for aninhados irão percorrer todos os possiveis pares de vertices - i e j ; na qual usa um vertice intermediario
*/

void floyd_warshall()
{
    inicializar_matrizes();
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matriz_distancias_minimas[i][k] + matriz_distancias_minimas[k][j] < matriz_distancias_minimas[i][j])
                {
                    matriz_distancias_minimas[i][j] = matriz_distancias_minimas[i][k] + matriz_distancias_minimas[k][j];
                    matriz_predecessores[i][j] = matriz_predecessores[k][j];
                }
                // essa parte do if vai testar se a distancia de i para j via k é menor do que a distancia de i para j , caso seja, ele atualiza a matriz de predecessores.
                algoritmoExecutado = 1;
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

void imprimirmatriz_minima(float matriz[max][max], const char *titulo)
{
    printf("\n%s:\n\n", titulo);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if (matriz[i][j] == infinito)
                printf("%7s", "INF");  // 7 posições reservadas
            else
                printf("%7.2f   ", matriz[i][j]); // 7 posições, 2 casas decimais
        }
    printf("\n");
    }
}

/*
Tem o fito de exibir na tela a matriz de predecessores
*/
void imprimirmatriz_predecessor(int matriz[max][max], const char *titulo)
{
    printf("\n%s:\n\n", titulo);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d  ", matriz[i][j]);
        }
        printf("\n");
    }
}

/*
esta função tem o fito de gravar no arquivo "dados" todas as informações carregadas ou calculadas do programa.

*/

void salvardados()
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
        fprintf(f, "%s\n", cidades[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fprintf(f, "%.2f; ", matriz_de_adjacencia[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
    printf("O ARQUIVO FOI SALVO EM: dados.txt\n");
}
/*
lê um arquivo e todas as informações presentes nele.

*/
int carregarDados(const char *arquivo)
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
        fgets(cidades[i], 100, f);
        cidades[i][strcspn(cidades[i], "\n")] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(f, "%f;", &matriz_de_adjacencia[i][j]);
        }
    }
    fclose(f);

    Dados_carregados = 1;
    printf("\nOs dados foram carregados com sucesso!\n");
    return 1;
}

/*
servirá para guardar dentro de um arquivo todos os resultados finais do algoritmo de floyd-warshall

*/
void salvar_resultados(const char *dados)
{
    FILE *f = fopen(dados, "w");
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
            fprintf(f, "%.2f; ", matriz_distancias_minimas[i][j]);
        }
        fprintf(f, "\n");
    }

    fprintf(f, "\n MATRIZ DE PREDECESSORES:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fprintf(f, "%d ", matriz_predecessores[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
    printf("\nOS RESULTADOS FORAM SALVOS NO ARQUIVO:  %s\n", dados);
}
/*
reconstroi e exibe a rota entre dois municipios do agreste.

*/
void mostrar_caminho(int origem, int destino)
{
    if (matriz_predecessores[origem][destino] == -1)
    {
        printf("EITA, NAO EXISTE CAMINHO PARA ESSE LUGAR.\n");
        return;
    }
    int caminho[max], tam = 0, atual = destino;
    while (atual != origem)
    {
        caminho[tam++] = atual;
        atual = matriz_predecessores[origem][atual];
    }
    caminho[tam++] = origem;

    printf("CAMINHO GERAL: ");
    for (int i = tam - 1; i >= 0; i--)
    {
        printf("%s", cidades[caminho[i]]);
        if (i > 0)
        {
            printf(" --> ");
        }
    }
    printf("\n");
}
/* 
dentro desta funcao o usuário vai carregar ou inserir os dados manualmente.
*/
void menu_entrada_dados()
{
    int opcao;
    printf("\n--- MENU DE DADOS ---\n");
    printf("1 - PREFIRO INSERIR TODOS OS DADOS MANUALMENTE\n");
    printf("2 - PREFIRO CARREGAR TODOS OS DADOS DO ARQUIVO(dados.txt)\n");
    printf("SUA ESCOLHA: ");
    scanf("%d", &opcao);
    getchar();

    if (opcao == 1)
    {
        printf("\nDigite o numero de cidades: ");
        scanf("%d", &n);
        getchar();
        for (int i = 0; i < n; i++)
        {
            printf("O Nome da cidade %d: ", i);
            fgets(cidades[i], 100, stdin);
            cidades[i][strcspn(cidades[i], "\n")] = 0;
        }
        printf("\nDigite a matriz de adjacencia:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("De %s para %s: ", cidades[i], cidades[j]);
                scanf("%f", &matriz_de_adjacencia[i][j]);
            }
        }
        Dados_carregados = 1;
        salvardados();
    }
    else if (opcao == 2)
    {
        carregarDados("dados.txt");
    }
    else
    {
        printf("Opcao invalida.\n");
    }
}
/*
esta função serve para o usuario ver as matrizes do algoritmo, ou seja, para o usuario vê-las, é  necessário fazer o algoritmo primeiro.
*/
void menu_ver_matrizes()
{
    if (!algoritmoExecutado)
    {
        printf("\nPOR FAVOR, FACA O ALGORITMO DE FLOYD-WARSHALL PRIMEIRO.\n");
        return;
    }
    int opcao;
    printf("\n--- TODAS AS MATRIZES DISPONIVEIS ---\n");
    printf("1 - Visualizar a Matriz de Distancias Minimas\n");
    printf("2 - Visualizar a Matriz de Predecessores\n");
    printf("SUA ESCOLHA EH: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        imprimirmatriz_minima(matriz_distancias_minimas, "Matriz de Distancias Minimas");
    break;

    case 2:
        imprimirmatriz_predecessor(matriz_predecessores, "\nMatriz de Predecessores");
    break;

    default:
        printf("Opcao invalida.\n");
    }
}
/*
esta função vai permitir ao usuario descobrir qual o menor caminho entre duas cidades - tudo isso após a execução do floyd-warshall.
*/
void ver_caminho()
{
    if (!algoritmoExecutado)
    {
        printf("POR FAVOR, FACA O ALGORITMO DE FLOYD-WARSHALL PRIMEIRO\n");
        return;
    }
    printf("\nTODAS AS CIDADES DISPONIVEIS:\n");
    for (int i = 0; i < n; i++)
        printf("%d - %s\n", i, cidades[i]);

    int origem, destino;
    printf("\nESCOLHA O NUMERO DA CIDADE DE PARTIDA: ");
    scanf("%d", &origem);
    printf("ESCOLHA O NUMERO DA CIDADE DE DESTINO: ");
    scanf("%d", &destino);

    if (origem < 0 || origem >= n || destino < 0 || destino >= n)
    {
        printf("ESTES INDICES SAO INVALIDOS.\n");
        return;
    }

    if (matriz_distancias_minimas[origem][destino] == infinito)
    {
        printf("NAO EXISTE UM CAMINHO PARA ESTE LUGAR.\n");
    }
    else
    {
        printf("\nO CUSTO TOTAL EH %.2f QUILOMETROS\n", matriz_distancias_minimas[origem][destino]);
        mostrar_caminho(origem, destino);
}
}