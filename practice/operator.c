#include <stdio.h>

int main()
{
    // arithemetic
    // int a = 30 + 20;
    // int b = 30 - 20;
    // int c = 30 * 20;
    // double d = (30 / 20);

    // logical
    //  && and
    // || or
    // ! not

    int a = 10;
    int b = 60;
    int c = 30;
    if (a > b && a > c)
    {
        printf("a is bigger");
    }
    else if (b > a && b > c)
    {
        printf("b is bigger");
    }
    else
    {
        printf("c is bigger");
    }

    return 0;
}