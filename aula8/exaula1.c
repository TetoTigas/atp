#include <stdio.h>

int main(){

    int x[10][3],menor=10, prova_menor=0;

    for(int lines = 0; lines < 10; lines++)
    {
        for(int columns = 0; columns < 3; columns++)
        {
            printf("Digite as notas do aluno [%d] na prova [%d] :\n", lines, columns+1);
            scanf("%d", &x[lines][columns]);
        }
    }
    for(int lines = 0; lines < 10; lines++)
    {
        for (int columns = 0; columns < 3; columns+
        {
            if(x[lines][columns] < menor)
            {
                menor = x[lines][columns];
                prova_menor = columns;
            }
        }
        printf("Aluno [%d] Prova [%d]  Menor Nota [%d] \n", lines, prova_menor+1, menor);
        menor = 10;
        prova_menor = 0;
    }
} 