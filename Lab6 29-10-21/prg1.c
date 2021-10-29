#include<stdio.h>
#include<math.h>

int main(){
    printf("Input 3 sides of a triangle:");
    float s1,s2,s3;
    scanf("%f %f %f",&s1,&s2,&s3);
    float s = (s1+s2+s3)/2;
    float x = s*(s-s1)*(s-s2)*(s-s3);
    float Area = sqrt(x);
    printf("Area of the Triangle is: %f",Area);
    return 0;
}