#include <stdio.h>
#include <stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *temp, *newnode;
    int count = 0, choice;
    // Assuming that initialy no node is present
    head = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            head = temp = newnode;
        }
        // creating a new node using malloc
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue 0 or 1?");
        scanf("%d", &choice);
    }
    // printing the data
    temp = head;
    while (temp != 0)
    {
        printf("%d", temp->data);
        // incrementing
        temp = temp->next;
        count++;
    }
    printf("Number of nodes are: %d", count);

    // Inserting an element at the end
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data to be inserted:");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    // printing the list
    temp = head;
    printf("New list is:\n");
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    printf("Number of nodes are %d", count + 1);
}