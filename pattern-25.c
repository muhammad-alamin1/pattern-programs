/*
    *
    * *
    * * *
    * *
    *
*/
#include <stdio.h>

int main(void)
{
    unsigned int i, j, n = 5;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++)
            printf("* ", i);
        printf("\n");
    }

    for(i = n - 1; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("* ", i);
        }
        printf("\n");
    }

    return 0;
}
