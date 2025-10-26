#include <stdio.h>

void main()
{
    int n = 7;
    int original = n;

    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;

    if (n == 1)
        printf("%d is an ugly number\n", original);
    else
        printf("%d is not an ugly number\n", original);
}