/*
    Alphabetic right angle triangle
    A
    A B
    A B C
*/
#include <stdio.h>

int main(void)
{
    unsigned int i, j, n = 5;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%c ", j+64);
        }
        printf("\n");
    }

    return 0;
}




