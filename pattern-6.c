#include <stdio.h>

int main(void)
{
    int i, j, k = 1, n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            printf("%2d ", k++);
        printf("\n");
    }
}
