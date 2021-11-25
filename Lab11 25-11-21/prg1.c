/*print 1-9 and 9-1 using single while loop*/
#include<stdio.h>
int main(){
    int i = 0;
    while (i++ < 19){
        if(i<10)
            printf("%d\n",i);
        else
            printf("%d\n",19-i);
    }
    return 0;
}