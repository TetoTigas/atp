#include <stdio.h>

int main(){

    int x,y,z;

    printf("type three numbers \n");
    scanf("%d %d %d", &x, &y, &z);
    if(x > y && x > z){
        if(y > z){
            printf("the order is %d > %d > %d \n", x, y, z);
        }else{
            printf("the order is %d > %d > %d \n", x, z, y);
        } 
    } else if(y > x && y > z){
        if(x > z){
            printf("the order is %d > %d > %d \n", y, x, z);
        }else{
            printf("the order is %d > %d > %d \n", y, z, x);
        }
    } else if(z > y && z > x){
        if(x > y){
            printf("the order is %d > %d > %d \n", z, x, y);
        }else{
            printf("the order is %d > %d > %d \n", z, y, x);
        }
    }
    else{
        printf("the numbers are equal \n");
    }
    return 0;

}