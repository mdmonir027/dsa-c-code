#include <stdio.h>
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int search(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int add(int arr[], int n, int value, int capacity)
{
    if (n > capacity - 1)
        return n;
    arr[n] = value;
    return n + 1;
}

int insetAt(int arr[], int n, int postion, int value)
{
    int i;
    for (i = n; i >= postion; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[postion] = value;
    return n + 1;
}

int deletedValue(int arr[], int n, int value)
{

    int position = search(arr, n, value);
    int i;
    for (i = position; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int main()
{

    int arr[8] = {1, 2, 3, 4, 5};
    int capacity = sizeof(arr) / sizeof(int);
    int n = 5;

    printf("before insertion at the end \n");
    printArray(arr, n);

    n = deletedValue(arr, n, 4);

    printf("\nafter insertion at the end \n");
    printArray(arr, n);
}