#include<stdio.h>

int main(){
    int u, v, t, a;
    printf("Enter the initial velocity: ");
    scanf("%d", &u);
    printf("Enter the final velocity: ");
    scanf("%d", &v);
    printf("Enter the time taken: ");
    scanf("%d", &t);
    // v = u + at
    a = (v-u)/t;

    if(a>0){
        printf("Accelerating");
    }
    else if (a=0){
        printf("constant velocity");
    }
    else if (a=0){
        printf("Deccelerating");
    }
    
    return 0;
}