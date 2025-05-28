#include <stdio.h>

int main(){
    int ano, mes;

    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("Digite o mes (1-12): ");
    scanf("%d", &mes);
    
    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        if(mes == 2){
            printf("O mes %d tem 29 dias.\n", mes);
        }else if (mes % 2 != 0 || mes == 8){
            printf("O mes %d tem 31 dias.\n", mes);
        } else{
            printf("O mes %d tem 30 dias.\n", mes);
        }
    }else{
        if(mes == 2){
            printf("O mes %d tem 28 dias.\n", ano);
        }
        if (mes % 2 != 0 || mes == 8){
            printf("O mes %d tem 31 dias.\n", mes);
        } else{
            printf("O mes %d tem 30 dias.\n", mes);
        }
    }
    return 0;
}