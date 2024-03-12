/*
    1 10 11 20 21
    2 9  12 19 22
*/
#include <stdio.h>

int main(void)
{
    int i, j, n = 5, x, y;

    for(i = 1; i <= n; i++)
    {
        x = i;
        y = n - i + 1;

        for(j = 1; j <= n; j++)
        {
            if(j % 2 == 1)
                printf("%2d ", x);
            else
                printf("%2d ", y);

            x += n;
            y += n;
        }
        printf("\n");
    }
}
