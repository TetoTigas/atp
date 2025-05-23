#include <stdio.h>
#include <stdlib.h>

void fiveVal(){
    int nv[5], big, small;
    for(int i = 0; i < 5; i++){
        printf("Enter 5 values: ");
        scanf("%d", &nv[i]);
        printf("| %d | \n", nv[i]);
    }

    for(int i = 0; i < 5; i++){
        if(nv[i] > big){
            nv[i] == big;
            printf("%d", big);
        }else if( small > nv[i]){
            nv[i] == small;
        }
    }
    printf("Biggest: %d\n", big);
    printf("Smallest: %d\n", small);
}
int main(){
    fiveVal();
    return 0;
}
