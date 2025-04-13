#include <stdio.h>
#include <math.h>

int main(){
    int anoNasc, ano;

    printf("insira o ano de nascimento : \n");
    scanf("%d", &anoNasc);
    printf("insira o ano atual : \n");
    scanf("%d", &ano);

    anoNasc = ano - anoNasc;

    printf("%d", anoNasc);
    return 0;
}