#include <stdio.h>
  int main(){

    char Gab[7], Resp[7];
    int Nota, Tam = 8;

    printf("Insira o gabarito das questões 1-8 \n");
    for(int i =0; i<8; i++){
        scanf(" %c", &Gab[i]);
    }    

    
    
    for(int i=0;i<10;i++){
        Nota=0;
        printf("Digite as respostas do  aluno %d \n", i+1);

        for(int i =0; i<Tam; i++)
        {
            scanf(" %c", &Resp[i]);
        }    
        for(int i=0; i<Tam; i++)
        {
            if(Gab[i] == Resp[i]){
                Nota +=1;
            }
        }
        printf("Nota aluno %d é : %d\n",i+1 ,Nota);
    }

  }