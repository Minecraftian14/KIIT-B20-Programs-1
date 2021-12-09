/*
Write a function to find out largest between n numbers and another functions 
to count the number of leaders (A number is a leader if all previous numbers are smaller)
*/
#include<stdio.h>

int largest(int n){
    int next_num, max=0,i;
    for(i=0;i<n;i++){
        printf("Enter Next Number: ");
        scanf("%d",&next_num);
        if(next_num>max)
            max = next_num;
    }
    return max;
}
void main(){
    int limit, max;
    printf("Enter how many numbers you want to Enter: ");
    scanf("%d",&limit);
    max = largest(limit);
    printf("The largest number is : %d", max);
}