/*
    number right angle triangle
    1
    1 2
    1 2 3
*/
#include <stdio.h>

int main(void)
{
    unsigned int i, j, n = 5;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    return 0;
}
