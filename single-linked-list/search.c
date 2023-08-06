// Search the list

#include "header.h"

void search_node(struct node *start, int item)
{
    struct node *p = start;
    int pos = 1;

    while(p != NULL)
    {
        if(p->info == item)
        {
            printf("\nItem %d found at position %d\n", item, pos);
            return;
        }
        p = p->link;
        pos++;
    }
    printf("\nItem %d not found in the list\n", item);
}
