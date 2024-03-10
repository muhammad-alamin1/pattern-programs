/*
    1 1 2 1 3 1
    1 2 2 2 3 2
*/

#include <stdio.h>

int main(void)
{
    int i, j, n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= 3; j++)
            printf("%2d%2d", j, i);
        printf("\n");
    }
}
