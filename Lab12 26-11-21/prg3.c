#include <stdio.h>

#define red  "\x1b[31m"
#define end  "\x1b[0m"
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (int j = 1;j<=i;j++){
            printf ("$ ");
        }
        for (int j = 1; j <= n - i; j++){
            printf ("  ");
        }
        for (int j = 1;j<=i;j++){
            printf (red"$ "end);
        }
        for (int j = 1; j <= n - i; j++){
            printf ("  ");
        }
        for (int j = 1;j<=i;j++){
            printf ("$ ");
        }
        printf ("\n");
    }
    return 0;
}