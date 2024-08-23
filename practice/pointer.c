#include <stdio.h>

int main()
{

    int a;
    printf("Enter a value: ");
    scanf("%d", &a);

    int *ptr = &a;

    printf("%d", *ptr);
    return 0;
}