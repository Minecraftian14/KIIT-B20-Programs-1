//Swapping numbers using third variable

#include<stdio.h>

int main()
{
	int a = 4;
    int b = 7;
    int c;
    c=b; b=a; a=c;
    printf("Int a: %d\n",a);
    printf("Int b: %d",b);
    return 0;
}