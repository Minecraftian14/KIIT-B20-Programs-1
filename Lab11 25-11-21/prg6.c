/*Write a program in 'C' to calculate the following sum series and display the result:
  S=1/2 + 1/3 + 1/4 + .... 1/n           */

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i < 11; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}