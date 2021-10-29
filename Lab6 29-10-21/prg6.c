#include<stdio.h>  

int main(){   
    float fahrenheit, celsius;
    printf("Enter the temperature in Celsius");
    scanf("%f",&celsius);
    celsius = 24;
    fahrenheit =( (celsius*9)/5)+32;
    printf("\n\n Temperature in fahrenheit is:  %f",fahrenheit);
    return (0);
}  