#include <stdio.h>

#define red  "\x1b[31m"
#define end  "\x1b[0m"

int main(){ 
    int n, i=0, x=1;  
    printf("Enter a number: ");  
    scanf("%d", &n);   
    int s=n-1, num=1;  
    printf("\n");  
    while( i++ <n ){  
        for (int j = 1; j <= s; j++){  
            printf(" ");
        }
        for (int k= 1; k <= num; k++){  
            printf("%d",x);  
        }
        for (int j = 1; j <= s; j++){  
            printf("  ");
        }  
        for (int k= 1; k <= num; k++){  
            printf(red"%d"end,x);  
        }
        if(s > i){  
            s -= 1;  
            num = num+2;
            x++;
        }  
        if(s <i){  
            s += 1;  
            num = num -2;
            x--;
        }  
        printf("\n");
    }
    return 0;     
}