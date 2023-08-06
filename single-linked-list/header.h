// Header file

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int    info;
    struct node *link;
};

struct node *create_list(struct node *start);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);
struct node *addafter(struct node *start, int data, int item);
struct node *addbefore(struct node *start, int data, int item);
struct node *delete_node(struct node *start, int data);
struct node *reverse_list(struct node *start, int data);
struct node *addatpos(struct node *start, int data, int pos);
void display_list(struct node *start);
void search_node(struct node *start, int item);
void count_nodes(struct node *start);
