#include<stdio.h>

int power(int x,int y);

int main(){
    int a,b;
    printf("Enter two numbers for 'a' raise to 'b': ");
    scanf("%d %d",&a,&b);
    printf("%d raised to %d = %d",a,b, power(a,b));
}

int power(int x,int y){
    return(y==0 ? 1 : power(x,y-1)*x);
}