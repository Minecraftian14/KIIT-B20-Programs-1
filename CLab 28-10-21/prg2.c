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