#include<stdio.h> //Q1 . 4x5 Matrix

int main(){
    printf("Enter x and y coordinates for 10 points ---> \n");
    int cord[10][2]; //initialize matrix
    for(int i = 0;i<10;i++){
        printf("Enter the value of x for point %d = ",i+1);
        scanf("%d",&cord[i][0]);
        printf("Enter the value of y for point %d = ",i+1);
        scanf("%d",&cord[i][1]);   
    }
    printf("Original matrix --->\n");
    for(int i = 0;i<10;i++){
        for(int j = 0;j<2;j++){
            printf("%d  ",cord[i][j]);
        }
        printf("\n");
    }
    return 0;
}