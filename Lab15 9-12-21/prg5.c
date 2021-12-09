#include<stdio.h>

int gcd(int x,int y){
    return(y==0 ? x : gcd(y,x%y));
}

int main(){
    int a,b;
    printf("Enter two numbers to find GCD: ");
    scanf("%d %d",&a,&b);
    printf("The GCD is: %d", gcd(a,b));
}