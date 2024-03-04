/*
    pattern

    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1
    5 4 3 2 1

*/
#include <stdio.h>

int main(void)
{
    unsigned int i, j, n = 5;

    for(i = n; i >= 1; i--)
    {
        for(j = n; j >= 1; j--)
            printf("%u ", j);
        printf("\n");
    }

    return 0;
}
