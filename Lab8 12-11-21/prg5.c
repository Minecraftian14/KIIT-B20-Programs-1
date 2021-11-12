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