#include <stdio.h>
#include <math.h>
/*INCOMPLETE*/
int convertDecimalToOctal(int dec);
int main()
{
    printf("Enter numbers (TO EXIT type 'exit'): \n");
    int c,n=0,p=0,z=0;
    while(1){
        scanf(" %d", &c);
        if(c>0){
            p++;
            continue;
        }
        if(c==0){
            z++;
        }
        if(c<0){
            n++;
        }
        else{
            break;
        }
    }
    printf("\nThe Total number of>\n");
    printf("Positive: %d\n",p);
    printf("Zeros   : %d\n",z);
    printf("Negative: %d\n",n);
    return 0;
}