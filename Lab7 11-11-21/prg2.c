#include<stdio.h>

#define g 9.8

int main(){
    float u,v,s;
    int t;

    printf("Enter the initial speed = ");
    scanf("%f",&u);

    for (int t = 1; t < 6; t++ ){
        v = u + g*t;
        s = u*t + (g*t*t)/2;
        printf("The velocity at time %d sec is : %f\n",t,v);
        printf("The distance covered at time %d sec is : %f\n\n",t,s);
    }

    //v = u + gt
    //s = ut + gt*t/2
    return 0;
}