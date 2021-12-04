#include<stdio.h>
void out(int a){
    for(int i=0;i<a;i++){
        printf("=");
    }
}
int main(){
    int n;
    printf("Enter the number of time you want to print:");
    scanf("%d",&n);
    out(n);
    return 0;
}