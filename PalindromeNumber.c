#include <stdio.h>
int main()
{
    int n, c, r, s = 0;
    printf("Enter any number:\n");
    scanf("%d", &n);
    c = n;
    while (n > 0)
    {
        r = n % 10;
        s = r + (s * 10);
        n = n / 10;
    }
    if (s == c)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}