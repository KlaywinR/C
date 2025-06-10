#include <stdio.h>
int main(void)
{

    int dado = 10;
    printf("\nDADO SEM INCREMENT0: %d\n", dado);

    dado++;
    printf(" \nDADO COM INCREMENTO: %d\n", dado);

    dado--;
    printf(" \nDADO COM DECREMENTO: %d\n", dado);

    dado -= 2;
    printf(" \nDADO POS DUAS UNIDADES DE DECREMENTO: %d\n", dado);
    dado += 3;
    printf(" \nDADO POS TRES UNIDADES DE INCREMENTO: %d\n", dado);

    return 0;
}