#include <stdio.h>

int main()
{

    for (int n = 1; n <= 5; n++)
    {

        for (int j = 1; j <= 2 * n - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}