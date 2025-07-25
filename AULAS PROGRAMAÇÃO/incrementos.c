#include <stdio.h>

int main(void){
    int a = 10, b = 5;

    b = a++ + 5;
    printf("\n b = a++ + 5 -> a: %i, b: %i ",a,b);
    
    return 0;



}