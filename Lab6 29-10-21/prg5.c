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