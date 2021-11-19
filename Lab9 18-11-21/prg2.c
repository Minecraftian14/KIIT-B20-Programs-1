#include<stdio.h>

int main(){
    int grade;
    printf("What grade are you in: ");
    scanf("%d", &grade);

    if(grade>1 && grade<12){
        printf("KIIT Student");
    }
    else{
        printf("KIIT University Student");
    }
    return 0;
}