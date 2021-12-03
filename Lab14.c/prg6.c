#include<stdio.h>

int fact(int a){
    int x=1;
    for (int i = 1; i <= a; i++){
        x = x*i;
    }
    return x;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp = fact(n);
    printf("Factorial of %d = %d",n,temp);
    return 0;
}