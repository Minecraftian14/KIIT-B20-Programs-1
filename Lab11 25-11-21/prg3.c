/*find time period of pendulum*/
#include<stdio.h>
#include<math.h>
int main(){
    float t,m,l = 10,g=9.81;

    printf("Enter the mass of the pendulum: ");
    scanf("%f",&m);

    for (l; l <= 50; l=l+10){
        t = 2 * 3.14 * sqrt(l/g);
        printf("%.2f\n",t);
    }
    return 0;
}