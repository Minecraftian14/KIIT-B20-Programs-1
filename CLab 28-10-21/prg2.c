/*
Q.2) Write a program in 'C' to initialize four integer variables then perform 
increment (pre/post), decrement (pre/post) operation with them as a single 
statement and store the resultant value in another variable. Also display all the variables 
at the last.*/

#include<stdio.h>

int main()
{
	int a=3;
    int b=5;
    int c=7;
    int d=9;
    int result;
    result = a++;b--;c++;d--;
    printf("Result: %d\n",result);
    return 0;
}