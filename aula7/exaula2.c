#include <stdio.h>

int main(){

    int tam;

    printf("Digite o tamanho do vetor \n");
    scanf("%d", &tam);
    
    int vet1[tam], vet2[tam], vet3[2*tam];

    for(int i = 0; i < tam; i++)
    {
        printf("\n Digite o numero da posição %d do vetor 1 :\n", i+1);
        scanf("%d", &vet1[i]);    
    }
    for(int i = 0; i < tam; i++)
    {
        printf("\n Digite o numero da posição %d do vetor 2 :\n", i+1);
        scanf("%d", &vet2[i]);        
    }
    int j =0;
    for(int i = 0; i < (tam); i++)
    {
        vet3[j] = vet1[i];
        j++;
        vet3[j] = vet2[i];
        j++; 
    }
    for(int i = 0; i < (2*tam); i++ )
    {   
        printf("%d || ", vet3[i]);
    }
    printf("\n7");
}