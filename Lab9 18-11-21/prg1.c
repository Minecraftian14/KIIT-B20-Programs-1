#include<stdio.h>

int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age<50){
        printf("Grace marks given = 60");
    }
    else{
        printf("Grace marks given = 40");
    }
    return 0;
}