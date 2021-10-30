/*
Q.3) Write a program in 'C' to initialize gravity using macro and input initial 
velocity & time then calculate the final velocity and total distance.
*/

#include<stdio.h>

#define g 9.8

int main(){
    printf("Enter the initial speed: ");
    float u,t,s;
    scanf("%f",&u);
    printf("Enter the Time: ");
    scanf("%f",&t);
    s = (u*t)+0.5*g*t*t;
    printf("The Distance covered is: %f m",s);
    return 0;
}