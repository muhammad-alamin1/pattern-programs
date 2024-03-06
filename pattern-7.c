#include <stdio.h>

int main(void)
{
    int i, j, k = 1, n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(k % 2 != 0)
            {
                printf("%2d ", k);
                k += 2;
            }
        }
        printf("\n");
    }

    return 0;
}

