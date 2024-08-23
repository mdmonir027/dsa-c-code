#include <stdio.h>

int main()
{
    int i, line_size, count;

    i = 1000;
    line_size = 5;
    count = 1;

    while (i > 0)
    {
        printf("%d", i);
        if (count >= 5)
        {
            printf("\n");
            count = 1;
        }
        else
        {
            printf("\t");
            count++;
        }
        i--;
    }
}