#include <stdio.h>
#include <math.h>

float n1 = 0;
float n2 = 0;
float n3 = 0;
float medPond =0;

int p1 = 0;
int p2 = 0;
int p3 = 0;

int main(void) {


    printf("Insira as 3 notas \n");

    scanf("%f %f %f", &n1, &n2, &n3 );



    printf("Insira os 3 pesos \n");

    scanf("%d %d %d", &p1, &p2, &p3 );

    medPond = ((n1 * p1 ) +    ( n2 * p2 ) +  ( n3 + p3 )) / (p1 + p2 + p3);
    
    printf("%f", medPond);

    return 0;
};