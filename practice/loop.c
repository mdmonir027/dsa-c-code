#include <stdio.h>

int main()
{
    // int target = 32;
    // for (int i = 0; i < 50; i++)
    // {
    //     printf("%d\n", i);
    //     if (i == target)
    //     {
    //         break;
    //     }
    // }
    int i = 0;
    int target = 32;
    while (i < 50)
    {
        if (i == target)
        {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }

    return 0;
}