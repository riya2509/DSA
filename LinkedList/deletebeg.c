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
    head = 0; // Assuming that there is no node
    while (choice)
    {
        // Creating a node
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &newnode->data);
        newnode->next = 0; // setting the adress storing block of newnode as 0
        if (head == 0)
        {
            head = temp = newnode;
        }
        else//another node using malloc and newnode value changes
        {
          temp->next=newnode;
          temp=newnode;

        }
        printf("Do you want to continue 0 or 1?");
        scanf("%d",&choice);
    }
    //Printing of list by traversing
    temp=head;//temp pointing at start of the list
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;//incrementing temp variable
        count++;

    }
    printf("The number of nodes are:%d",count);

    //Deleting an element from the beginning of the list
    if(head==0){
        printf("List is empty i.e no nodes");
    }
    else{
    temp=head;
    head=head->next;
    free(temp);
    }
    //Printing the new list
    temp=head;
    printf("The new list is:");
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("The number of nodes are:%d",count-1);
}