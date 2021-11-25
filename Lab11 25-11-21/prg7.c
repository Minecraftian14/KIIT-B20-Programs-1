#include<stdio.h>
int main(){
    int n,x=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        x = x*i;
    }
    printf("%d",x);
    return 0;
}