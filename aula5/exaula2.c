#include <stdio.h>

int main(){
    int x = 150;
    int y = 110;
    int i=0;

    while(x!=y){
        x += 2;
        y += 3;  
        i++;

        printf("%d || %d || %d \n",x ,y ,i);
    } 
    printf("Demorará %d anos para as alturas se igualarem !\n", i);

}