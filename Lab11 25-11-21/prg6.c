/*Write a program in 'C' to calculate the following sum series and display the result:
  S=1/2 + 1/3 + 1/4 + .... 1/n           */

#include<stdio.h>
int main(){
    float n, sum;
    printf("Enter a number: ");
    scanf("%f",&n);
    for (int i = 1; i <= n; i++){
        sum += 1/i;
    }
    printf("SUM = %f",sum);
    return 0;
}