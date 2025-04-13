#include <stdio.h>
#include <math.h>

int main(void){

    float sal = 0;

    printf("insira seu salario : \n");

    scanf("%f", &sal);

    sal = sal * 1.25;

    printf("%.2f", sal);

    return 0;
}