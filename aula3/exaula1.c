#include <stdio.h>

int main(){

    int ano;

    printf("type a year \n");
    scanf("%d", &ano);

    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        printf("the year %d is a leap year! \n", ano);
    } else{
        printf("the year %d isn't a leap year! \n", ano);
    }
    
}