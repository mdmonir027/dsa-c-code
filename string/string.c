#include <stdio.h>
#include <string.h>

void printStr(char str[])
{
    printf("Your given string is '%s'", str);
}

int main()
{
    // char str[] = "Monirul Islam";
    // int len = strlen(str);
    // for (int i = 0; i < len; i++)
    // {
    //     printf("%c\n", str[i]);
    // }
    // printf("%d", strlen(str));

    // get input from terminal
    int size = 50;
    char data[size];
    printf("Enter you name: ");
    scanf("%[^\n]s", data);

    printStr(data);
}