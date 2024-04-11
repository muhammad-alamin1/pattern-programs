/*
    3 3 3
    2 2
    1
*/
#include <stdio.h>

int main(void)
{
    unsigned int i, j, n = 5;

    for(i = n; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("%u ", i);
        }
        printf("\n");
    }

    return 0;
}

