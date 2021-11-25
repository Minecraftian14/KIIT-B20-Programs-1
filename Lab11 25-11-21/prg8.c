/*Write a program in 'C' to calculate the following sum series and display the result:
     S=1/n + 1/n-2 + 1/n-4 + .... + 1/0            */

#include<stdio.h>
int main(){
    int i,s=0;
    printf("Enter a number: ");
    scanf("%d",&i);
    while(i>0){
        s+=1.0/i;
        i-=2;
    }
    printf("%d",s);
    return 0;
}