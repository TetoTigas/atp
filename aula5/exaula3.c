#include <stdio.h>

int main(){
  int list[4], x;
    printf("Coloque as 5 idades \n");
    scanf("%d %d %d %d %d",&list[0], &list[1], &list[2], &list[3], &list[4]);
    for(int i = 0; i < 5; i++ ){
        if (list[i]>18){
            x++;
        }
        printf("%d || %d || %d \n", x, list[i], i);
    }
    printf("%d pessoas são maiores de idade \n", x);
}