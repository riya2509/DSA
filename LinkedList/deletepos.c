// Deleting from a certain position
#include <stdio.h>
#include <stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp,*nextnode;
    int count = 0, choice;
    head = 0; // Assuming initially there is no node
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp=newnode;
        }
        // Another node created using malloc
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue 0 or 1?\n");
        scanf("%d", &choice);
    }
    // printing of list by traversing
    temp = head;
    while (temp != 0)
    {
        printf("%d", temp->data);
        temp = temp->next;
        count++;
    }
    printf("Number of nodes are %d", count);

    // deleting
    int pos,i=1;
    //traversing from start
    temp=head;
    printf("Enter position:");
    scanf("%d",&pos);
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
 // printing of list by traversing
    temp = head;
    printf("New list is:");
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    printf("Number of nodes are %d", count-1);


}
