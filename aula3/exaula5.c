#include <stdio.h>
 
int main(){
    int Num;

    printf("Digite um numero: ");
    scanf("%d", &Num);

    if(Num % 2 == 0){
        printf("O numero %d e par.\n", Num);
    } else {
        printf("O numero %d e impar.\n", Num);
    }
return 0;

}