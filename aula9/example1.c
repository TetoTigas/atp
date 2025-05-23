#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int N, i;
    int *vetor;

    printf("How many elements do you want to allocate?");
    scanf("%d", &N);
    vetor = (int *)malloc(sizeof(int) * N);
    if (vetor == NULL){
        printf("memory allocation failed \n");
    
        return 1;
    }else {
        printf("Memory allocation successful \n");
    }
    for (i = 0; i < N; i++){
        printf("Enter the value for element %d: ", i);
        scanf("%d", &vetor[i]); 
    }
    for(int i = 0; i < N; i++){
        printf("Element %d: || %d || %d || %p ||\n", i, vetor[i], *(&vetor[i]), (void *)&vetor[i]);
    }
    free(vetor);
    return 0;
}