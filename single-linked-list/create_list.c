// Create list

#include "header.h"

struct node *create_list(struct node *start)
{
    int i, n, data;

    printf("\nEnter number of nodes: ");
    scanf("%d", &n);

    start = NULL;

    if(n == 0)
    {
        printf("\nEntered number is 0. No elements to be inserted.\n");
        return start;
    }

    printf("\nEnter elements to be inserted...\n");
    printf("\nEnter data to be inserted: ");
    scanf("%d", &data);

    start = addatbeg(start, data);
 
    for(i = 2; i<=n; i++)
    {
        printf("\nEnter data to be inserted: ");
        scanf("%d", &data);
        start = addatend(start, data);
    }

    return start;
}

struct node *addatbeg(struct node *start, int data)
{
    struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node));

    temp->info = data;
    temp->link = start;
   
    start = temp;

    printf("Data %d has been added at the beginning\n", data);

    return start;
}

struct node *addatend(struct node *start, int data)
{
    struct node *p;
    struct node *temp;

    p = start;

    while(p->link != NULL)
    {
       p = p->link;
    }

    temp = (struct node *)malloc(sizeof(struct node));

    temp->info = data;
    temp->link = NULL;

    p->link = temp;

    printf("Data %d has been added at the end\n", data);

    return start;
}

struct node *addafter(struct node *start, int data, int item)
{
    struct node *p;
    struct node *temp;

    p = start;
    while(p != NULL)
    {
        if(p->info == item)
        {
            temp = (struct node *)malloc(sizeof(struct node));

            temp->info = data;
            temp->link = p->link;
            p->link = temp;

            printf("%s: Node with data %d is inserted\n", __func__, data);

            return start;
        }
        p = p->link;
    }

    printf("%s: Node with data %d is not present\n", __func__, data);

    return start;
}

struct node *addbefore(struct node *start, int data, int item)
{
    struct node *p;
    struct node *temp;

    if(start == NULL)
    {
        printf("%s: List is empty\n", __func__);
        return start;
    }

    // If data need to be inserted as first node
    if(item == start->info)
    {
        temp = (struct node *)malloc(sizeof(struct node));

        temp->info = data;
        temp->link = start;

        start = temp;

        printf("%s: Node with data %d is inserted\n", __func__, data);

        return start;
    }

    p = start;
    while(p->link != NULL)
    {
        if(p->link->info == item)
        {
            temp = (struct node *)malloc(sizeof(struct node));

            temp->info = data;
            temp->link = p->link;
            p->link = temp;

            printf("%s: Node with data %d is inserted\n", __func__, data);

            return start;
        }
        p = p->link;
    }

    printf("%s: Node with data %d is not present\n", __func__, data);

    return start;
}

struct node *addatpos(struct node *start, int data, int pos)
{
    struct node *temp;
    struct node *p;
    int i;

    temp = (struct node *)malloc(sizeof(struct node));

    temp->info = data;

    if(pos == 1)
    {
        temp->link = start;
        start = temp;
        return start;
    }

    p = start;

    for(i = 1; i < pos-1 && p != NULL; i++)
    {
        p = p->link;
    }

    if(p == NULL)
    {
        printf("There are less than %d elements\n", pos);
    }
    else
    {
        temp->link = p->link;
        p->link = temp;
    }

    printf("Data %d has been inserted at position %d\n", data, pos);

    return start;
}
