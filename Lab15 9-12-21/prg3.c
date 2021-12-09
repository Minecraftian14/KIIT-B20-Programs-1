#include<stdio.h>

int sum(int n){
    return(n/10==0 ? n : sum(n/10)+n%10);
}

int main(){
    int a;
    printf("Enter a number to sum of digits: ");
    scanf("%d",&a);
    printf("The Sum is: %d", sum(a));
}