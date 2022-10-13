//Declaring a linked list
#include <stdio.h>
#include <stdlib.h>
void main(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *head, *newnode ,*temp;
    int count=0 , choice;
    head=0;
    while(choice){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(head==0){
        head=newnode=temp;
    }
    //new element entered through malloc
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to continue 0 or 1?\n");
    scanf("%d", &choice);
    
    }
    temp=head; // printing starting from beginning
    while(temp!=0){
        printf("%d\n",temp->data);
        temp=temp->next;
        count++;
    }
    printf("The number of nodes are:%d\n",count);

}