/*
Q.6)Given three inputs (a, b, c), display 1 if those are sides of a right angle triangle 
    else display 0 on the screen. (hxh == pxp+bx b)
*/
#include<stdio.h>
#include<math.h>

#define s(x) (x)*(x)

int main(){
    float a,b,c;

    printf("Enter the values of sides a, b and c = ");
    scanf("%f %f %f", &a, &b, &c);

    int t = (a==sqrt(s(b)+s(c))) || (b==sqrt(s(a)+s(c))) || (c==sqrt(s(b)+s(a)));

    printf("%d", t);
    return 0;
}