#include <stdio.h>

int main()
{
    int N = 7;
    int DATA[10] = {4, 5, 6, 7, 8, 9, 10};

    int item;
    printf("Enter the value you want to search: ");
    scanf("%d", &item);
    int loc = -1;
    int k = 0, l = N - 1;
    int mid = (l + k) / 2;
    while (k <= l)
    {
        mid = (l + k) / 2;
        if (DATA[mid] == item)
        {
            loc = mid;
            break;
        }
        else if (DATA[mid] < item)
        {
            k = mid + 1;
        }
        else
        {
            l = mid - 1;
        }
    }

    printf("Item founded On %d", loc);
}