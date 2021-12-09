#include<stdio.h>
void main(){
    int a;
    int i=0 ;
    int count = 0;
    int total = 0;

    repeat:
        if(count<11){
            printf("Enter the score of player %d : ", count+1);
            scanf("%d", &a);
            total = total + a;
            count++;
            goto repeat;
        }

    // for(i;i<11;i++){
    //     printf("Enter the score of player %d : ", i+1);
    //     scanf("%d", &a);
    //     total = total+a;
    // }
    int avg = total/11; 
    printf("average score is = %d", avg);
}