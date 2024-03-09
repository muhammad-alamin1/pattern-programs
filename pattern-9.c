/*
   1 2 3 4 5
   2 4 6 8 10
   3 6 9 12 15
*/
#include <stdio.h>

int main(void)
{
    int i, j, k = 2, n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            printf("%2d ", i*j);
        }
        printf("\n");
    }

    return 0;
}

