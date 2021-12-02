#include <stdio.h>

#define red  "\x1b[31m"
#define end  "\x1b[0m"
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=0;i<=n;i++){
        for (int j = n-i;j>=1;j--){
            printf ("$ ");
        }
        for (int j = 0;j < i;j++){
            printf ("  ");
        }
        for (int j = n-i;j>=1;j--){
            printf (red"$ "end);
        }
        for (int j = 0;j < i;j++){
            printf ("  ");
        }
        for (int j = n-i;j>=1;j--){
            printf ("$ ");
        }
        printf ("\n");
    }
    return 0;
}