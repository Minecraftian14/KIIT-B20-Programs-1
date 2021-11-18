#include<stdio.h>

#define s(x) (x)*(x)

int main(){
    int a,b,c,d, max;
    printf("Enter 3 Integers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    a = max;

    if (b>max)
    {
        max = b;
    }
    if (c>max)
    {
        max = c;
    }
    if (d>max)
    {
        max = d;
    }
    

    printf("The highest number is: %d", max);
    return 0;
}