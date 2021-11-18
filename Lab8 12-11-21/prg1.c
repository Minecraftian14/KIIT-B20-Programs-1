/*
Q.1)Given three inputs (a,b,c) display 1 if those are sides of a triangle else display 0 on the screen
*/
#include<stdio.h>
#define s(x) (x)*(x)

int main(){
    float a,b,c;

    printf("Enter the values of sides a, b and c = ");
    scanf("%f %f %f", &a, &b, &c);

    int t = ((a+b)>c) && ((c+b)>a) && ((a+c)>b);

    printf("%d", t);
    return 0;
}