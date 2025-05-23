#include <stdio.h>

int main(){

    const int tam = 10;
    int a[10][20], sum, vet[tam];


    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            a[i][j] = rand() % 100;
            sum += a[i][j];
        }
        vet[i] = sum;
        sum = 0;
    }

}