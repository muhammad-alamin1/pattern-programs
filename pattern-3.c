/*
    Pattern

    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5

*/
#include <stdio.h>

int main(void)
{
    unsigned int i, j, n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            printf("%u ", j);
        printf("\n");
    }

    return 0;
}
