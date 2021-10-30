/*
Q.5) Write a program in 'C' to input radius value then calculate area and circumference 
of a circle, where ‘pi’ value is specified using macro. 
*/

#include<stdio.h>

#define pi 3.14

int main(){
    printf("Enter the Radius: ");
    int r;
    scanf("%d",&r);
    int area = pi*r*r;
    int circ = 2*pi*r;
    printf("The Area is: %d\nThe Circumference is: %d",area,circ);
    return 0;
}