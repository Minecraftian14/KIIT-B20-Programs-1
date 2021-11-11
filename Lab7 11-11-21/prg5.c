#include<stdio.h>
//f(x) = x^2 + 3
#define f(x) (x)*(x)+3
 
int main(){
    int data[] = {4,5,11,12,9};
    printf("The domain of the given function is:\n");
    for(int i=0;i<5;i++){
        printf("%d\n",f(data[i]));
    }
    return 0;
}