// QUESTION: 01

#include <stdio.h>
struct node
{
    int val;
    struct node *next;
};
void reverse(struct node *list)
{
    if (list != 0)
    {
        reverse(list->next);
        printf("%d\n", list->val);
    }
}

#@ Vishak