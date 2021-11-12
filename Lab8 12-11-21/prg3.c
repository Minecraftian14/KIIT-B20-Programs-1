/*
Q.3)Write a programme to display 1 if two lines in 2-D are perpendicular 
    to each other else any other integer value. (m1 x m2 x-1=1)
*/

#include<stdio.h>

int main(){
    float m1,m2;

    printf("Enter the values of m1 and m2 = ");
    scanf("%f %f", &m1, &m2);

    int t = m1*m2*-1 == 1;

    printf("%d", t);
    return 0;
}