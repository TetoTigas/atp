#include <stdio.h>
#include <math.h>

int main(){

    float horario;

    printf("insira o horario em hh.mm : \n");
    scanf("%f", &horario);
    printf("horario %f\n", horario);
    
    int ParteMinuto = (horario - (int) horario) * 100;


    printf("minuto %d\n", ParteMinuto);
    
    horario = (horario*60) + ParteMinuto;
    printf("horario 2 %f\n", horario);

    return 0;   
}
/*PS: esse programa está causando erro de flutuação de ponteiro
,ou seja, ao converter os minutos de decimal para inteiro ocorre
uma flutuação no valor do resultado devido a forma na qual as ope-
rações funcionam no processador, este erro se repete ao multipli-
carmos o horario que passou por uma conversão FLOAT -> INT por 60
para mais informações acesse: 
https://en.wikipedia.org/wiki/Floating-point_error_mitigation
(não achei traduzido)*/
