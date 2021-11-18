#include<stdio.h>
int main(){
    int bs, hra, da, gs;
    printf("Enter the salary: ");
    scanf("%d", &bs);
    if(bs<1500){
        hra = bs*10/100;
        da = bs*40/100;
    }
    else{
        hra = 500;
        da = bs*50/100;
    }
    gs = bs+hra+da;
    printf("For the salary %d\nhra = %d\nda = %d\ngross salary = %d",bs,hra,da,gs);
}