// Um vendeddor  recebe um salrio fixo mais 5% de comissao sobre as vendas realizadas. Crie um  programa que receba o salário fixo do funcionario e o valor de suas vendas, calcule e mostre o valor a receber devido à comissao e o salario final.

#include <stdio.h>
#include <math.h>
float salariofixo;
float vendas;

int main()
{
    printf("digite o salario fixo do funcionario: ");
    scanf("%f", &salariofixo);
    printf("digite o valor das vendas: ");
    scanf("%f", &vendas);
    printf("o valor da comissao é: %.2f\n", vendas * 0.05);
    printf("o salario final é de: %.2f\n", salariofixo + (vendas * 0.05));
    printf("O salario  fixo é de: %.2f\n", salariofixo);
    printf("o valor das vendas é de: %.2f\n", vendas);
    printf("o salario fixo é de: %.2f\n', salariofixo);");

    return 0;
}
