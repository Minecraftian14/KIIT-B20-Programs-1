/*
Q.4) Write a program in 'C' to find out square and cube of a number using macro.
*/

#include<stdio.h>

#define sqr(a) (a)*(a)
#define cube(a) (a)*(a)*(a)

int main(){
    printf("Enter a number: ");
    int a;
    scanf("%d",&a);
    int x = sqr(a);
    int y = cube(a);
    printf("The square is: %d\nThe Cube is: %d",x,y);
    return 0;
}