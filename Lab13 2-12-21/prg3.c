/*Terminal Program*/
#include<stdio.h>
int main(){
    int y,n;
    start:
    printf("\n\n1. Factorial of a Number\n2. Prime or Not\n3. Odd or Even\n4. Exit\n");
    printf("--Enter your preference: ");
    scanf("%d",&y);
    switch (y){
    case 1:
        printf("Enter a number: ");
        int x=1;
        scanf("%d",&n);
        for (int i = 1; i <= n; i++){
            x = x*i;
        }
        printf("%d",x);
        goto start;
    case 2:
        printf("Enter a number to check prime: ");
        int n,flag=0;
        scanf("%d",&n);
        for (int i = 2; i <= n/2; i++){
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
        goto start;
    case 3:
        printf("Enter a number: ");
        scanf("%d",&n);
        if(n%2==0)
        printf("EVEN");
        else
        printf("ODD");
        goto start;
    case 4:
        break;
    default:
        goto start;
    }
    return 0;
}