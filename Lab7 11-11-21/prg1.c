#include<stdio.h>

int main(){
    float x1, x2, y1, y2;

    printf("Enter the values of y1 and y2 = ");
    scanf("%f %f", &y1, &y2);
    
    printf("\nEnter the values of x1 and x2 = ");
    scanf("%f %f", &x1, &x2);

    float m = (y2-y1)/(x2-x1);

    printf("\nThe slope of the given points is: %f", m);
    return 0;
}