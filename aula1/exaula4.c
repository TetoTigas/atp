#include <stdio.h>

int main(){
    float medida;

    printf("Digite uma medida em pes :\n");
    scanf("%f", &medida);
    printf("Conversão em : \n -Pes: %.2f \n -jardas: %.2f \n -milhas: %.2f \n -polegadas: %.2f \n", (medida), (medida*1/3), (medida*52800), (medida*12));

}