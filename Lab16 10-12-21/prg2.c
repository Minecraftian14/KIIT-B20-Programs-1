/*sum*/
#include<stdio.h>

#define pi 3.14

int sum(int a,int b);

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    printf("Sum of numbers is: %d\n", sum(a,b));
    return 0;
}

int sum(int a,int b){
    return (a+b);
}