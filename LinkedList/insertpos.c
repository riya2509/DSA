// Inserting a new element after a given position
#include <stdio.h>
#include <stdlib.h>
void main(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *head, *newnode , *temp;
    int choice, count=0;
    head=0;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        // creating a newnode using malloc
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue 0 or 1 ?");
        scanf("%d", &choice);

    }
    // Printing of list
    temp=head;
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
        count++;

    }
    printf("The number of nodes are:%d",count);


    // inserting an element after a given position
    int pos, i=1;// i = another variable for keeping track of position
    printf("Enter the position:");
    scanf("%d",&pos);
    if(pos>count){
        printf("Invalid position");
    }
    else{
        newnode=(struct node *)malloc(sizeof(struct node));
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        printf("Enter data to be inserted:");
        scanf("%d",&newnode->data);
        // first establishing the link to right node
        newnode->next=temp->next;
        temp->next=newnode;
    }
    // printing of new list
    temp=head;
    printf("New list is:");
    while(temp!=0){
printf("%d",temp->data);
temp=temp->next;
    }
     printf("Number of nodes are %d", count + 1);
}