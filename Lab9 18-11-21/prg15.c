#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int s = 0;
    int n1 = n;
pal:
    if (n != 0)
    {
        int d = n % 10;
        s = s * 10 + d;
        n /= 10;
        goto pal;
    }
    (s == n1) ? printf("%d is a palindrome", n1) : printf("%d is not a palindrome, its reverse is %d", n1, s);
}