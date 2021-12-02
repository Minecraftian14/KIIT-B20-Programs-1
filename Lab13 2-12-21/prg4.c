/*Overtime Pay*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter your total work hours: ");
    scanf("%d",&n);
    if(n>40){
        printf("You are eligible for overtime payment\n");
        int x = (n-40)*12;
        printf("Overtime Pay = Rs.%d",x);
    }
    else
    printf("You are NOT eligible for overtime payment");

    return 0;
}