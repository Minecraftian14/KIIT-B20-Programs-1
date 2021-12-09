#include<stdio.h>

int gcd(int x,int y,int z){
    return(y==0 ? x : gcd(z,x%y,y%z));
}

int main(){
    int a,b,c;
    printf("Enter three numbers to find GCD: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The GCD is: %d", gcd(a,b,c));
}