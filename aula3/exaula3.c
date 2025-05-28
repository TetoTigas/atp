#include <stdio.h>

int main(){
    int a, b, c;

    printf("type the first side of the triangle: ");
    scanf("%d", &a);
    printf("type the second side of the triangle: ");
    scanf("%d", &b);
    printf("type the third side of the triangle: ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is invalid.\n");
    }
    if (a == b || a == c || b == c){
        printf("The triangle is isosceles.\n");
    }else if( a == b && b == c){
        printf("The triangle is equilateral.\n");
    }else{
        printf("The triangle is scalene.\n");
    }
    return 0;
}