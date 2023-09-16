#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void add(struct Node *main, int value)
{
    struct Node *a = NULL;
    a = (struct Node *)malloc(sizeof(struct Node));
    a->data = value;
    a->next = NULL;

    struct Node *current = main;
    while (current->next)
    {
        current = current->next;
    }

    current->next = a;
}
void removeItem(struct Node *main, int target)
{

    if (main->data == target)
    {
        main->data = main->next->data;
        main->next = main->next->next;
        return;
    }

    struct Node *current = main;
    while (current)
    {
        if (current->next->data == target)
        {
            current->next = current->next->next;
            break;
        }
        current = current->next;
    }
    return;
}

int main()
{

    struct Node *a = NULL, *b = NULL, *c = NULL;

    a = (struct Node *)malloc(sizeof(struct Node));

    a->data = 10;
    a->next = NULL;

    add(a, 20);
    add(a, 30);
    add(a, 40);

    removeItem(a, 40);

    struct Node *current = a;

    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }

    return 0;
}