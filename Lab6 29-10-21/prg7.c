/*
Q.7) Write a program in 'C' to input two integers and add that two integers without 
using ‘+’ operator.
*/

#include<stdio.h>

#define add(x,y) x+y
int main(){
    int a = 4;
    int b = 5;
    int c = add(a,b);
    printf("%d",c);
    return 0;
}