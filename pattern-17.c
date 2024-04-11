/*
    binary right angle triangle
    1
    0 0
    1 1 1
*/
#include <stdio.h>

int main(void)
{
    unsigned int i, j, n = 5;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%u ", i%2);
        }
        printf("\n");
    }

    return 0;
}



