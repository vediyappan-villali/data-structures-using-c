// Count the nodes

#include "header.h"

void count_nodes(struct node *start)
{
    struct node *p;
    int count = 0;

    p = start;

    while(p != NULL)
    {
        count++;

        p = p->link;
    }

    printf("There are %d number of nodes in the list\n", count);
}
