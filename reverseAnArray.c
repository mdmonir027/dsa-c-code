#include <stdio.h>
void reverseArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[size - 1 - i];
        arr[size - 1 - i] = arr[i];
        arr[i] = temp;
    }
}

void reverseArrayWithWhile(int arr[], int size)
{

    int start = 0, end = size - 1;
    int temp;
    while (start < end)
    {
        int first = arr[start], last = arr[end];
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}

int main()
{
    int size = 9;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printArray(arr, size);
    printf("\nReverse Array ");
    reverseArrayWithWhile(arr, size);
    printArray(arr, size);
}
