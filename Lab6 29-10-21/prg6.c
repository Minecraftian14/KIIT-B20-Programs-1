/*
Q.6) Write a program in 'C' yel input the temperature in Fahrenheit and convert it inyel 
Celsius, and vice-versa.
*/

#include<stdio.h>
#include<conio.h>

#define yel "\x1b[33m"
#define end "\x1b[0m"

int main(){   
    float fahrenheit, celsius;
    char in;
    printf("Is your input Celsius of Farenheit?(c/f):");
    scanf("%c",&in);
    if(in=='c'){
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f",&celsius);
        fahrenheit = ( (celsius*9)/5)+32;
        printf("\nTemperature in fahrenheit is:"yel " %.1f F" end,fahrenheit);
    }
    else if (in=='f')
    {
        printf("\nEnter the temperature in Farenheit: ");
        scanf("%f",&fahrenheit);
        celsius = ( (fahrenheit-32)*5/9);
        printf("\nTemperature in celsius is:"yel " %.1f C" end,celsius);
    }else{
        printf("\nError: Invalid Input");
    }
    printf("\nPress enter to continue...");
    getch();
}  