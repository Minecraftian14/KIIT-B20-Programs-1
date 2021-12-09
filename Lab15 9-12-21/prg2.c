#include<stdio.h>

int fact(int n){
    return(n==1 ? 1 : n*fact(n-1));
}

int main(){
    int a;
    printf("Enter a number to find factorial: ");
    scanf("%d",&a);
    printf("The factorial is: %d", fact(a));
}