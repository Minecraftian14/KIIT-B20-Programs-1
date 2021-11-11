#include<stdio.h>

int main(){
    float a,b,c;

    printf("Enter 3 values of resistors:");
    scanf("%f %f %f", &a,&b,&c);

    float ser = a + b + c;
    printf("The equivalent resistance in series is: %f\n", ser);

    float par = 1/((1/a)+(1/b)+(1/c));
    printf("The equivalent resistance in parallel is: %f\n", par);

    return 0;
}