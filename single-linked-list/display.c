// Display list

#include "header.h"

void display_list(struct node *start)
{
    struct node *p;

    if(start == NULL)
    {
        printf("\nList is empty\n");
        return;
    }

    p = start;

    printf("\nList is: ");
    while(p != NULL)
    {
        printf("%d ", p->info);
        p = p->link;
    }
    printf("\n");
}
