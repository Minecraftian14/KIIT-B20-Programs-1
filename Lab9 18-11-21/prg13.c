#include<stdio.h>

void main(){
    int a;
    int i=0 ;
    int count = 0;
    int cent = 0;
    repeat:
        if(count<10){
            printf("Enter the score of player %d : ", count+1);
            scanf("%d", &a);
            if (a>=100){
                cent++;
            }
            if (a<0){
                printf("Enter a positive Integer!!!\n");
                goto repeat;
            }
            count++;
            goto repeat;
        }
    printf("number of centuries = %d", cent);
}