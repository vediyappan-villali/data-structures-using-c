// Delete a node from linked list

#include "header.h"

struct node *delete_node(struct node *start, int data)
{
    struct node *p;
    struct node *temp;

    if(start == NULL)
    {
        printf("List is empty\n");
        return start;
    }

    // Delete only node
    if(start->info == data)
    {
        temp = start;
        start = start->link;

        free(temp);

        return start;
    }

    // Delete between nodes and end
    p = start;
    while(p->link != NULL)
    {
        if(p->link->info == data)
        {
            temp = p->link;
            p->link = temp->link;
            free(temp);
            return start;
        }
        p = p->link;
    }

    printf("Element %d is not found\n", data);

    return 0;
}
