#include<stdio.h>

int main(){
    int n;
    printf("Enter the limit for input: ");
    scanf("%d",&n);
    int num[n];
    printf("Enter %d numbers \n",n);
    for (int i = 0; i < n; i++){
        printf("Enter the number %d: ", i+1);
        scanf("%d", &num[i]);
    }
    printf("\nodd : ");
    for (int i = 0; i < n; i++){
        if (num[i]%2==1){
            printf("%d, ",num[i]);
        }
    }
    printf("\neven : ");
    for (int i = 0; i < n; i++){
        if (num[i]%2==0){
            printf("%d, ",num[i]);
        }
    }
    
    return 0;
}