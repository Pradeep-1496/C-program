#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    // NODE 1
    struct node *head = malloc(sizeof(struct node));
    head->data = 100;
    head->link = NULL; // head or start

    // NODE 2
    struct node *current = malloc(sizeof(struct node));
    current->data = 200;
    current->link = NULL;
    head->link = current; // linking 1st and 2 node  by arrow operator

    // NODE 3
    current = malloc(sizeof(struct node));
    current->data = 300;
    current->link = NULL;
    head->link->link = current;

    // NODE 4
    current = malloc(sizeof(struct node));
    current->data = 400;
    current->link = NULL;
    head->link->link->link = current;

    ////NODE 5
    current = malloc(sizeof(struct node));
    current->data = 500;
    current->link = NULL;
    head->link->link->link->link = current;

    print_data(head); // calling of function to prine 5 nodes of linked list
    counter(head);
    return 0;
}

// FUNCTION TO PRINT OP LL

void print_data(struct node *head)
{

    if (head == NULL)
        printf("LINKED LIST IS EMPTY");
    else
    {
        struct node *ptr = NULL;
        ptr = head;

        while (ptr != NULL)
        {
            printf("\n%d     link address = %d", ptr->data, ptr->link);
            ptr = ptr->link;
        }
    }
}
void counter(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("LINKED LIST IS EMPTY");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("\nNode count is %d", count);
}