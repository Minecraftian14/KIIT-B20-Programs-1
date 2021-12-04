#include<stdio.h>

char upper(char a){
    a=a-32;
    return a;
}

int main(){
    char ch;
    printf("Enter lower case char:");
    scanf(" %c",&ch);
    printf("UPPER CASE char: %c",upper(ch));
    return 0;
}