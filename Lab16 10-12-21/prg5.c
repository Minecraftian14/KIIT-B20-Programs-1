#include<stdio.h>

int main(){
    int pos=0,n;
    printf("Enter the limit for input: ");
    scanf("%d",&n);
    int num[n];
    printf("Enter %d numbers \n",n);
    for (int i = 0; i < n; i++){
        printf("Enter the number %d: ", i+1);
        scanf("%d", &num[i]);
    }
    int find;
    printf("Enter the number you want to find: ");
    scanf("%d",&find);
    for (int i = 0; i < n; i++){
        if (num[i]==find){
            pos = i;
            break;
        }
        
    }
    printf("\nThe query was found at position %d in the array.", pos);
    
    return 0;
}