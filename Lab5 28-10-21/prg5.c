/*
Q.5) Write a program in 'C' to initialize a 3-digit integer, then find and display its reverse.
(using only operators)
*/

#include<stdio.h>

int main()
{
    int a = 475;
    int n1,n2,n3, rev;    

    printf("The original Number is: %d", a);

    n1 = a / 100;
    n2 = (a % 100) / 10;
    n3 = a%10;

    rev = 100*n3 + 10*n2 + n1;

    printf(" The reverse of the number is: %d", rev);

    return 0;
}