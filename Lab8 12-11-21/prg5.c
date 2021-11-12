/*
Q.5)Write a programme to display 1 if two lines in 2-D are parallel to each other else 0.
    (m1 == m2)
*/
#include<stdio.h>

int main(){
    float m1,m2;

    printf("Enter the values of m1 and m2 = ");
    scanf("%f %f", &m1, &m2);

    int t = m1 == m2;

    printf("%d", t);
    return 0;
}