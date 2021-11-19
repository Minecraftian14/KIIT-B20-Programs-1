#include<stdio.h>

int main(){
    char username;
    int password;
    printf("Enter Username: ");
    scanf("%c", &username);
    printf("Enter Password: ");
    scanf("%d", &password);
    if(username=='a' && password==12345){
        printf("Login Successful ");
    }
    else{
        printf("Incorrect username or password");
    }

    return 0;
}