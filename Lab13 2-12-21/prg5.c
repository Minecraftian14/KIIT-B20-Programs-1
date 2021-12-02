/*Power*/
#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    printf("Enter Two numbers: ");
    scanf("%d %d",&a, &b);
    long x=pow(a,b);
    printf("%d raised to %d = %d\n",a,b,x);
    long y=pow(b,a);
    printf("%d raised to %d = %d",b,a,y);
    return 0;
}