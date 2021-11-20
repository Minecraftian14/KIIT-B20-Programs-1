#include<stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;

    printf("Enter the co-ordinates of first point (X1, Y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the co-ordinates of second point (X2, Y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the co-ordinates of third point (X3, Y3): ");
    scanf("%d %d", &x3, &y3);

    int a = x1 * (y2 - y3)
            + x2 * (y3 - y1)
            + x3 * (y1 - y2);

    if(a == 0){
        printf("The points DO NOT form a triangle");
    }
    else{
        printf("The points form a triangle");
    }

    return 0;
}