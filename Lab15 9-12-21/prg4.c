#include<stdio.h>

int fib(int n){
    return(n<=1 ? n : fib(n-1)+fib(n-2));
}

int main(){
    int a;
    printf("Enter a number to find Fibonacci: ");
    scanf("%d",&a);
    printf("The nth Fibonacci number is: %d", fib(a));
}