#include <stdio.h>
#include <math.h>
  //PROTOTIPO DE UMA FUNÇÃO./
float soma(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);
float subtracao(float a, float b);
float potencia(float base, float expoente);
void mostrar_menu();
 // INT NOTAS_DE_ALUNOS(NOTA1, NOTA2, NOTA3)
/////////////////////////////////////////////////////////////////
float soma(float a, float b)
{
    return a + b;
}

float multiplicacao(float a, float b)
{
    return a * b;
}
float divisao(float a, float b)
{
    return a / b;
}
float subtracao(float a, float b)
{
    return a - b;
}
float potencia(float base, float expoente)
{
    return pow(base, expoente);
}

//////////////////////////////////////////
void mostrar_menu()
{
    puts("-------------------");
    puts("[1] - SOMA");
    puts("[2] - MULTIPLICACAO");
    puts("[3] - DIVISAO");
    puts("[4] - SUBTRACAO");
    puts("[5] - SUBTRACAO");
    puts("[0] - SAIR");
}

int main()
{
    int opcao_escolhida;
    float num2, num1, resultado;

    do
    {
        mostrar_menu();
        puts("Escolha a opcaoda sua preferencia");
        scanf("%i", &opcao_escolhida);

        if (opcao_escolhida >= 1 && opcao_escolhida <= 5)
        {
            puts("DIGITE O SEU PRIMEIRO NUUMERO:");
            scanf("%f", &num1);
            puts("DIGITE O SEU SEGUNDO NUUMERO:");
            scanf("%f", &num2);
        }
        switch (opcao_escolhida)
        
        case 1:
            resultado = soma(num1, num2);
            printf("resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = multiplicacao(num1, num2);
            printf("Resultado eh: %.2f\n", resultado);
            break;

        case 3:
            if (num2 == 0)
            {
                puts("ERRO: Esta divisao eh por zero");
            }
            else
            {
                resultado = divisao(num1, num2);
                printf("resultado eh: %.2f\n", resultado);
            }
            break;

        case 4:
            resultado = subtracao(num1, num2);
            printf("o RESULTADO EH: %.2f\n", resultado);
            break;
        case 5:
            resultado = potencia(num1, num2);
            printf("o resultado eh: %.2f\n", resultado);
            break;
        default:

            break;
        }

    } while (opcao_escolhida != 0);

    puts("SAINDO DA CALCULADORA");

    return 0;
}