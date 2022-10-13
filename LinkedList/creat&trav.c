// Creation and traversal of single linked list
#include <stdio.h>
#include <stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    int choice, count = 0;
    head = 0; // Assuming that first we have no nodes in the list
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode; // all 0
        }
        // Another node using malloc and newnode value changes
        else
        {
            // adress of new node stored in newnode
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue 0 or 1 ?");
        scanf("%d", &choice);
    }
    // Printing of list by traversing
    temp = head; // temp variable pointing at the start of list
    while (temp != 0)
    { // untill the last null node
        printf("%d", temp->data);
        temp = temp->next; // incrementing temp variable to point at next node
        count++;
    }
    printf("Number of nodes are %d", count);
}