#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
    int Num1, Num2;
    char opcao;

   printf("Selecione uma opcao:\n");
    printf("+ - Somar\n");
    printf("- - Subtrair\n");
    printf("/ - Dividir\n");
    printf("* - Multiplicar\n");
    printf("@ - Raiz Quadrada\n");
    scanf(" %c", &opcao);
    
    switch (opcao)
    {   
    case '+':
    
        printf("Digite o primeiro numero: ");
        scanf(" %d", &Num1);
        printf("Digite o segundo numero: ");
        scanf(" %d", &Num2);
        
        printf("Resultado: %d\n", Num1 + Num2);
        
        break;
    case '-':

        printf("Digite o primeiro numero: ");
        scanf(" %d", &Num1);
        printf("Digite o segundo numero: ");
        scanf(" %d", &Num2);

        printf("Resultado: %d\n", Num1 - Num2);
        break;
    case '/':

            printf("Digite o primeiro numero: ");
            scanf(" %d", &Num1);
            printf("Digite o segundo numero: ");
            scanf(" %d", &Num2);

        if (Num2 != 0) {
            printf("Resultado: %.2f\n", (float)Num1 / Num2);
        } else {
            printf("Erro: Divisao por zero.\n");
        }
        break;
    case '@':
        
        printf("Digite o primeiro numero: ");
        scanf("%d", &Num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &Num2);

        printf("Resultado: %.2f || %.2f \n", sqrt(Num1), sqrt(Num2));
        break;
    case '*':

        printf("Digite o primeiro numero: ");
        scanf(" %d", &Num1);
        printf("Digite o segundo numero: ");
        scanf(" %d", &Num2);

        printf("Resultado: %d\n", Num1 * Num2);
        break;
    default:
        break;
    }

}