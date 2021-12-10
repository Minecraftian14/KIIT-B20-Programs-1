#include<stdio.h>

int main(){
    int pos=0,n,large=0;
    printf("Enter the limit for input: ");
    scanf("%d",&n);
    int num[n];
    printf("Enter %d numbers \n",n);
    for (int i = 0; i < n; i++){
        printf("Enter the number %d: ", i+1);
        scanf("%d", &num[i]);
    }
    int small = num[0];
    for (int i = 0; i < n; i++){
        if(num[i]>large)
            large = num[i];
        if(num[i]<small)
            small = num[i];
    }
    printf("\nThe Largest number is: %d", large);
    printf("\nThe smallest number is: %d", small);
    
    return 0;
}