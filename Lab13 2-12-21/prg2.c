/*find prime numbers from 1 to 300*/
#include<stdio.h>
int prime(int x){
    int flag=0;
    for (int i = 2; i <= x/2; i++){
        if (x%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("Enter a limit: ");
    scanf("%d",&n);
    for (int k = 2; k < n; k++){
        if(prime(k)){
            printf("%d\n",k);
        }
    }

    return 0;
}