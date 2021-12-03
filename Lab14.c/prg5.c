#include<stdio.h>
void series(int a){
    for(int i=1;i<=a;i++){
        printf("%d,",i);
    }
}
int main(){
    int n;
    printf("Enter the limit of the series:");
    scanf("%d",&n);
    series(n);
}