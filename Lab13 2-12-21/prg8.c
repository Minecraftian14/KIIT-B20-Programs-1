#include <stdio.h>
#include <math.h>

int convertDecimalToOctal(int dec);
int main()
{
    int dec;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    int oct = 0, i = 1;

    while (dec != 0)
    {
     oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    printf("%d in decimal = %d in octal", dec, oct);

    return 0;
}