#include<stdio.h>

int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int a;
    printf("Enter a number to find Fibonacci: ");
    scanf("%d",&a);
    printf("The Fibonacci series is: \n");
    for(int i=0;i<=a;i++){
        printf("%d\n",fib(i));
    }
}