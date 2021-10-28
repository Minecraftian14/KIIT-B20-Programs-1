//Swapping numbers without third variable

#include<stdio.h>

int main()
{
	int a = 4;
    int b = 7;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Int a: %d\n",a);
    printf("Int b: %d",b);
    return 0;
}