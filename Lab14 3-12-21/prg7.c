#include<stdio.h>
#include<math.h>

int power(int a,int b){
    int x = pow(a,b);
    return x;
}

int main(){
    int a,b;
    printf("Enter Two numbers: ");
    scanf("%d %d",&a, &b);
    int temp = power(a,b);
    printf("%d raised to %d = %d\n",a,b,temp);
    return 0;
}