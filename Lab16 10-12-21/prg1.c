/*avg marks of 20 students*/
#include<stdio.h>

#define pi 3.14

float area(float a);
float circ(float a);

int main(){
    float x;
    float a,c;
    printf("Enter the Radius of the circle: ");
    scanf("%f", &x);
    printf("Area of the Circle is: %f\n",area(x));
    printf("Circumference of the Circle is: %f",circ(x));
    return 0;
}

float area(float a){
    return (pi*(a*a));
}
float circ(float a){
    return (2*pi*a);
}