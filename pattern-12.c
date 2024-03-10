/*
    1 6 11 16 21
    2 7 12 17 22
*/

#include <stdio.h>

int main(void)
{
    int i, j, n = 5;
    int x;

    for(i = 1; i <= n; i++)
    {
        x = i;
        for(j = 1; j <= n; j++)
        {
            printf("%2d ", x);
            x += n;
        }
        printf("\n");
    }
}


