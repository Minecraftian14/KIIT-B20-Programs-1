#include<stdio.h>

#define s(x) (x)*(x)

int main(){
    float a,b,c;

    printf("Enter the values of sides a, b and c = ");
    scanf("%f %f %f", &a, &b, &c);

    int t = ((a+b)>c) && ((c+b)>a) && ((a+c)>b);
    int p = t * (a+b+c);

    printf("%d", p);
    return 0;
}