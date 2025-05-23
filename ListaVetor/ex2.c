#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int main(){

    int Num[9], ;Resp;

    for(int i =0; i<Tam; i++){
        Num[i]= rand() % 21;
    }   

        printf("Insira um Número \n");
        scanf("%d", &Resp);

    for(int i=0; i<Tam; i++)
    {
        if( Num[i] == Resp){
            printf("UHULL VC ACERTOU!!!!!!!!!!!! \n o número %d encontra-se na posição %d do vetor \n", Resp, i);
        }else{
            printf("ahhhhhhh vc não acertou :( \n");
        }
        printf("%d\n", Num[i]);
    }
    
}