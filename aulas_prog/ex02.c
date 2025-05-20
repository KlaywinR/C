#include <stdio.h>
#include <math.h>
 



int main(void){
   int num;

printf("digite um numero --->: ");
scanf("%i", &num);
if(num %3 == 0  && num% 7 ==0){
    printf(" o numero %i e divisivel por 3 e por 7", num);


} else { 
    printf(" o numero %i nao e divisivel por 3 e por 7", num);

}

    return 0;
}