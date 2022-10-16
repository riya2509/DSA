#include <stdio.h>
#include <stdlib.h>
void create();
void print();
void main()
{
    create();
    print();
}
void create(){
struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    int choice;
    head = 0; // assuming intially no nodes are present
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
          head = newnode=temp ;
        }
        // new node entered using malloc
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue 0 or 1?\n");
        scanf("%d", &choice);
    }
}
void print(){
    //printing the list
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    int count=0;
    temp = head;
    while (temp != 0)
    {
        printf("%d", temp->data);
        temp = temp->next;
        count++;
    }
    printf("The number of nodes are:%d\n", count);
}