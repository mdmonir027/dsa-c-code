#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n = 6;
    // scanf("%d", &n);
    // Complete the code to print the pattern.
    int count = 2 * n - 1;
    int initValue = n;
    int i = 1, j, k, s;

    for (i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            if (i == 1 || j == count || j == 1 || i == count)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}