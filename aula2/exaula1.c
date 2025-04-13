#include <stdio.h>
#include <math.h>

int main(){
    float deposito, jur;

    printf("insira o valor do depósito : \n");
    scanf("%f", &deposito);
    printf("insira o juros anual em %%: \n");
    scanf("%f", &jur);

    

    printf("%.2f", deposito += deposito * jur/100);

    return 0;
}