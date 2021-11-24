/*
Q.3) Write a program in 'C' to initialize a 3-digit integer and display its 1st 
and last digit.
*/

#include<stdio.h>

int main()
{
	int a = 257;
    printf("First Digit: %d\n",a/100);
    printf("Last Digit: %d",a%10);
    return 0;
}