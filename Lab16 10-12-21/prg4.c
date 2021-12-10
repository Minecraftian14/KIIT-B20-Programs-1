#include<stdio.h>

int main(){
    int count=0,n;
    printf("Enter the limit for input: ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter marks of 20 students \n");
    for (int i = 0; i < n; i++){
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
        if (marks[i]>90){
            count++;
        }
    }
    printf("\nThe total students scoring O grade are: %d", count);
    
    return 0;
}