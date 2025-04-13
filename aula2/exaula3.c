#include <stdio.h>
#include <math.h>

int main(){
    float hd, h;
    int d;


    printf("insira a aktura do degrau : \n");
    scanf("%f", &hd);
    printf("insira a altura a se chegar: \n");
    scanf("%f", &h);

    d = (int) (h / hd + 1);

    printf("%d", d);

    return 0;   
}