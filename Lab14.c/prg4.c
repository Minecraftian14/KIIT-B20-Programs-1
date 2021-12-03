#include<stdio.h>
float sum(float a,float b){
    float temp = a+b;
    return temp;
}
int main(){
    float a,b;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    float temp = sum(a,b);
    printf("%f",temp);
    return 0;
}