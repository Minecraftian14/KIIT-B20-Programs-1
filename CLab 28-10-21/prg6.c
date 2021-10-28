#include<stdio.h>

int main()
{
	int cm = 3565733;
    float m;
    m = (float) cm/100;
    float km;
    km = (float) cm/100000;
    printf("Distance in Centimeters: %d\n Distance in Meters: %8.2f\n Distance in Kilometers: %6.3f", cm, m, km);
    return 0;
}