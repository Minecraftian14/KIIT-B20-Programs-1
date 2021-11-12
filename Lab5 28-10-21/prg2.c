/*
Q.2) Write a program in 'C' to initialize four integer variables then perform 
increment (pre/post), decrement (pre/post) operation with them as a single 
statement and store the resultant value in another variable. Also display all the 
variables at the last.*/

#include<stdio.h>

int main()
{
	int a=3;
    int b=5;
    int c=7;
    int d=9;
    int x;
    printf("a = %d, b = %d, c = %d, d = %d\nx = %d\n",a,b,c,d,x);
    x = --a + ++b - c++ - d--;
    printf("a = %d, b = %d, c = %d, d = %d\nx = %d\n",a,b,c,d,x);
    return 0;
}