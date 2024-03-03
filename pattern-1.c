/* Pattern Like:

    *****
    *****
    *****
*/

#include <stdio.h>

int main(void)
{
    unsigned int i, j, n = 3;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("*");
        printf("\n");
    }
}
