#include<stdio.h>
int main(){
    float p,q,r,s;
    printf("Enter the resistances in a wheatsones bridge: ");
    scanf("%f %f %f %f", &p,&q,&r,&s);

    if(p*s == r*q){
        printf("\nThe Wheatstone bridge is balanced");
    }
    else{
        printf("The wheatstone bridge is NOT balanced");
        s = r*q/p;
        printf("\nChoose S = %f to balance the bridge", s);
    }
return 0;
}