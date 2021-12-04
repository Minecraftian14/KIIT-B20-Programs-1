#include<stdio.h>
void out(int a,char ch){
    for(int i=0;i<a;i++){
        printf("%c",ch);
    }
}
int main(){
    int n;
    char c;
    printf("Enter the character you want to print:");
    scanf(" %c",&c);
    printf("Enter the number of time you want to print:");
    scanf("%d",&n);
    out(n,c);
    return 0;
}