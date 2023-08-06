#include "header.h"

int main(void)
{
    struct node *start = NULL;
    int    op;
    int    data;
    int    item;
    // int    pos;

    while(1)
    {
        printf("\nList of options:\n");
        printf("1. Create list\n");
        printf("2. Display\n");
        printf("3. Count\n");
        printf("4. Search\n");
        printf("5. Add at empty list or add at beginning\n");
        printf("6. Add at end\n");
        printf("7. Add after node\n");
        printf("8. Add before node\n");
        printf("9. Add at position\n");
        printf("10. Delete\n");
        printf("11. Reverse\n");
        printf("12. Quit\n\n");

        printf("Enter option: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1: 
                start = create_list(start);
                break;
            case 2:
                display_list(start);
                break;
            case 3:
                count_nodes(start);
                break;
            case 4:
                printf("Enter data to be insterted: ");
                scanf("%d", &data);
                search_node(start, data);
                break;
            case 5:
                printf("Enter data to be insterted: ");
                scanf("%d", &data);
                start = addatbeg(start, data);
                break;
            case 6:
                printf("Enter data to be insterted: ");
                scanf("%d", &data);
                start = addatend(start, data);
                break;
            case 7:
                printf("Enter data to be insterted: ");
                scanf("%d", &data);
                printf("Enter the element after which data need to be inserted: ");
                scanf("%d", &item);
                start = addafter(start, data, item);
                break;
            case 8:
                printf("Enter data to be insterted: ");
                scanf("%d", &data);
                printf("Enter the element before which data need to be inserted: ");
                scanf("%d", &item);
                start = addbefore(start, data, item);
                break;
            case 9:
                printf("Enter data to be insterted: ");
                scanf("%d", &data);
                printf("Enter the position where data need to be inserted: ");
                scanf("%d", &item);
                start = addatpos(start, data, item);
                break;
            case 10:
                printf("Enter data to be deleted: ");
                scanf("%d", &data);
                start = delete_node(start, data);
                break;
            case 11:
                start = reverse_list(start, data);
                break;
            case 12:
                printf("\nExited\n");
                exit(EXIT_SUCCESS);
            default:
                printf("Invalid option entered. Please enter valid option (1 to 12)...\n");
                break;
        }
    }

    return 0;
}
