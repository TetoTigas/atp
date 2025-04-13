#include <stdio.h>

int main(){
    int x, n, y=0;

    printf("insira a base da potencia :\n");
    scanf("%d", &x);
    printf("Insira o expoente :\n");
    scanf("%d",&n);
    y += x;
    for(int i = 0; i < n-1; i++){
        x = x*y;
        printf("%d \n",x);
    }

    
    return 0;

}