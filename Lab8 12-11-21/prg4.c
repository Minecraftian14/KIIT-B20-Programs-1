/*
Q.4)Given three inputs (a, b, c), display 1 for isosceles triangle, otherwise display 0.
*/
#include<stdio.h>
#include<math.h>

#define s(x) (x)*(x)

int main(){
    float a,b,c;

    printf("Enter the values of sides of isosceles  = ");
    scanf("%f %f %f", &a, &b, &c);

    int t = a==b || b==c || c==a;

    printf("%d", t);
    return 0;
}