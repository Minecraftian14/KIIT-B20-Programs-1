/*Factorial*/
#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter a number: ");
    int x=1,n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        x = x*i;
    }
    printf("Factorial = %d",x);
    return 0;
}