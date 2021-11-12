/*
Q.2) Write a program in 'C' to input marks in 5-subjects, then find out 
its average mark.
*/

#include<stdio.h>

int main(){
    printf("Input 5 different marks: ");
    float m1, m2, m3, m4, m5;
    scanf("%f %f %f %f %f",&m1,&m1,&m3,&m4,&m5);
    float avg = (m1+m2+m3+m4+m5)/5;
    printf("The average marks are: %f",avg);
    return 0;
}