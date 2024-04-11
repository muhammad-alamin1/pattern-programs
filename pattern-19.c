/*
    Alphabetic right angle triangle
    A
    B B
    C C C
*/
#include <stdio.h>

int main(void)
{
    unsigned int i, j, n = 5;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%c ", i+64);
        }
        printf("\n");
    }

    return 0;
}





