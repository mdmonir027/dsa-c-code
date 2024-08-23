#include <stdio.h>

int main()
{
    int N = 9;
    int DATA[9] = {6, 8, 4, 1, 2, 3, 7, 9, 5};
    printf("Unsorted DATA\n");
    printf("--------------------\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", DATA[i]);
    }

    int ptr, temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (DATA[j] > DATA[j + 1])
            {
                temp = DATA[j];
                DATA[j] = DATA[j + 1];
                DATA[j + 1] = temp;
            }
        }
    }
    printf("\n");
    printf("====================\n");

    printf("Sorted DATA\n");
    printf("--------------------\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", DATA[i]);
    }
}