/*find odd*/
#include<stdio.h>
int main(){
    int n;
    int count = 0;
    int sum = 0;
    for(int i=0;i<10;i++){
        printf("Enter a number: ");
        scanf("%d",&n);
        count += n%2;
        sum += (n%2)*n;
    }
    printf("sum = %d\n", sum);
    printf("count = %d", count);
    return 0;
}