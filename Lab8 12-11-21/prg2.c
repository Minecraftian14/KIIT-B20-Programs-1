#include<stdio.h>

int main(){
    float m1,m2;

    printf("Enter the values of m1 and m2 = ");
    scanf("%f %f", &m1, &m2);

    int t = m1 == m2;

    printf("%d", t);
    return 0;
}