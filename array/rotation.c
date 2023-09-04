#include <stdio.h>
void printArray(int arr[], int size)
{
    int i;
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}

void leftRotate(int arr[], int size)
{
    int i, last = arr[0];
    for (i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = last;
}
void rightRotate(int arr[], int size)
{
    int i, last = arr[size - 1];
    for (i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);

    printArray(arr, size);
}