#include <stdio.h>

void main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        int val = i;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", val);
            val += n - j;
        }
        printf("\n");
    }
}