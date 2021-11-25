/*find prime number*/
#include<stdio.h>
int main(){
    int n,flag=0;
    printf("Enter a number to check prime: ");
    scanf("%d",&n);
    for (int i = 2; i < n/2; i++){
        if (n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("The number is Prime");
    }
    else{
        printf("NOT Prime");
    }
    return 0;
}