/*
    Pattern Like:

    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4
    5 5 5 5 5
*/
#include <stdio.h>

int main(void)
{
    unsigned int i, j, n = 5;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
            printf("%u ", i);
        printf("\n");
    }

    return 0;
}
