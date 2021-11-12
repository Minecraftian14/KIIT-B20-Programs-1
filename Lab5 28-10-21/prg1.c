/*
Q.1) Write a program in 'C' to initialize two integer variables then perform division
 operation and store the result in integer variable as well as float variable and show 
 the result. Also perform the type casting to get the exact result in floating point.
*/

#include<stdio.h>

int main()
{
	int a=5,b=8,d;
    float c;
    d=b/a;
    c=(float)b/a;
    printf("Int: %d\n",d);
    printf("Float: %f\n",c);
    return 0;
}