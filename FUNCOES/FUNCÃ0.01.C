#include <stdio.h>

int media(float numero1, float numero2, float numero3){
     
     int resultado = (numero1 + numero2 + numero3) / 3;
     return resultado;
}
int main(){
    float numero1, numero2, numero3, resultado;
    
    puts("VAMOS DESCOBRIR A MEDIA DE 3 NUMEROS!");
    puts("digite o primeiro numero:");
    scanf("%f", &numero1);
     puts("digite o segundo numero:");
    scanf("%f", &numero2);
    puts("digite o terceiro numero:");
    scanf("%f", &numero3);
    resultado = media( numero1, numero2, numero3);

    printf(" A MEDIA EH: %.2f\n", resultado);

    return 0;
}