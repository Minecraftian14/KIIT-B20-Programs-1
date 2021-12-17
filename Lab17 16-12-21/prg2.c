// Transpose
#include<stdio.h>

int main(){
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    printf("Enter the number of columns: ");
    scanf("%d",&col);
    if(row!=col){
        printf("Enter a Square Matrix");
    }
    else{
    int mat[row][col];//initialize matrices
    int transpose[row][col]; 
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("Enter the value of [%d][%d] = ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Original Matrix ---> \n");
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; ++i){
        for (int j = 0; j < col; ++j) {
        transpose[j][i] = mat[i][j];
        } 
    }
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < col; ++i){
        for (int j = 0; j < row; ++j) {
        printf("%d  ", transpose[i][j]);
        if (j == row - 1){
            printf("\n");
        }
        }
    }
    return 0;
    }
}