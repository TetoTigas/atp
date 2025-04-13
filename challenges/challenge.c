#include <stdio.h>
#include <math.h>

/*
int main(){
  int a;
  scanf("%d", &a);
  else if(a%2==0)
  {
    printf("PAR\n");
  }
  else
  {
    printf("IMPAR\n");
  }

}*/

int main(){
    int x, y, n;
    while(x % n == 0 || y % n == 0){
        scanf("%d %d", &x, &y);
        scanf("%d", &n);
        if(n % x ==0 && n % y == 0){
            printf("x e y'\\n'");
        }else if(n % x == 0){
            printf("x\\n");
        }else if(n % y == 0){
            printf("y\\n");
        }
    }
}