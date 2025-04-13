#include <stdio.h>

int main(){
    int tam, itemquant, indice;
    float result, total;
    

    printf("Digite a quantidade de itens \n");
    scanf("%d", &tam);
    int quant[tam];
    float  val[tam];
    printf("Digite o valor de cada item e a quantidade vendida\nno formato '0.00  0' :\n");
    for(int i = 0; i < tam; i++)
    {
        printf("\n item %d \n", i+1);
        scanf("%f %d", &val[i], &quant[i]);
    }
    printf("vu = valor unitário \n q = quantidade \n vti = valor total item");
    for(int i = 0; i < tam; i++)
    {
        int maior = quant[0];
        indice = 0;
        if(maior < quant[i])
        {
            maior = quant[i];
            indice = i;
            
        }
        result=(val[i] * quant[i]);
        total +=(val[i] * quant[i]);

        printf("\n item %d \n vu = $%.2f || q = %d || $%.2f || \n", i+1, val[i], quant[i], result );
    }
    printf("Valor total = $%.2f || item mais vendido = item %d \n", total, indice+1);
}