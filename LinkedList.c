#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node)); // malloc is for memory alocation
    head->data = 46;
    head->link = NULL;

    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 23;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    current = (struct node *)malloc(sizeof(struct node)); // Memory alocation
    current->data = 12;                                   // data insert
    current->link = NULL;                                 // next node address(link) i.e NULL
    head->link->link->link = current;                     // Update previous Node Address(link)

    print_data(head);
    return 0;
}
// void counting_node(head){
//     int count = 0;
//     if (head->link == NULL)
//         printf("Linked List is Empty");

//     struct node *ptr = NULL;
//     ptr == head;
//     while (ptr != NULL)
//     {
//         count++;
//         ptr = ptr->link;
//     }
//     printf("count is %d", count);
// }
void print_data(struct node *head)
{
    if (head->link == NULL)
        printf("Linked List is Empty");
    struct node *ptr = NULL;
    ptr == head;
    while (ptr != NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->link;
    }
}
