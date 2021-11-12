/*
Q.2)WAP to display the Time Period of a simple pendulum for different length of the thread i.e. length = 10m, 20n , 30m, 40m, 50m in the following format:

(T = 2xpix * sqrt(l / g))

Length          Time Period

10              t1
20              t2
30              t3
40              t4
50              t5
*/

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