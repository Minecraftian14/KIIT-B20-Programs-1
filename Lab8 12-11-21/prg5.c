#include<stdio.h>
#include<math.h>

#define g 9.8
#define pi 3.14

int main(){
    int l = 10;
    float t;
    printf("\nLength             Time Perdiod\n");
    t = 2 * pi * sqrt(l/g);
    printf("%d                 %.2f\n",l,t);
    l = 20;
    t = 2 * pi * sqrt(l/g);
    printf("%d                 %.2f\n",l,t);
    l = 30;
    t = 2 * pi * sqrt(l/g);
    printf("%d                 %.2f\n",l,t);
    l = 40;
    t = 2 * pi * sqrt(l/g);
    printf("%d                 %.2f\n",l,t);
    l = 50;
    t = 2 * pi * sqrt(l/g);
    printf("%d                 %.2f\n",l,t);
    return 0;
}