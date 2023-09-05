#include <stdio.h>

// get factorial using recursive function
int factorial(int n)
{

    if (n == 0 || n == 1)
        return 1;
    return factorial(n - 1) * n;
}

int factR(int n)
{
    int i, val = 1;

    for (i = 1; i <= n; i++)
    {
        val = val * i;
    }
    return val;
}

int main()
{

    int n = 5;

    int val = factR(n);

    printf("%d", val);
}