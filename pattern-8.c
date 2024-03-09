/*
    2 4 6 8 10
    12 14 16 18 20
*/
#include <stdio.h>

int main(void)
{
    int i, j, k = 2, n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            printf("%2d ", k);
            k += 2;
        }
        printf("\n");
    }

    return 0;
}
