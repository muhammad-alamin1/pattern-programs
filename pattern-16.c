/*
    binary right angle triangle
    1
    1 0
    1 0 1
*/
#include <stdio.h>

int main(void)
{
    unsigned int i, j, n = 5;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%u ", j%2);
        }
        printf("\n");
    }

    return 0;
}


