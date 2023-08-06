// Reverse the list

#include "header.h"

struct node *reverse_list(struct node *start, int data)
{
    struct node *p;
    struct node *prev;
    struct node *next;
    int iter = 0;

    prev = NULL;
 
    p = start;

    while(p != NULL)
    {
         printf("Iteration = %d\n", iter++);
         next = p->link;
         p->link = prev;
         prev = p;
         p = next;
    }

    start = prev;

    return start;
}
