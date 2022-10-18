#include <stdio.h>
#include <stdlib.h>
void create();
void display();
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head,*temp,*newnode;
void main(){
    create();
    display();
}
void create(){
   int choice;
   head=0;//assuming empty node
   while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    if(head==0){
        head=temp=newnode;
    }
    else//creation of new node
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    printf("Do you want to continue:");
    scanf("%d",&choice);
   }
}
void display(){
    int count=0;
    temp=head;
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
        count++;
    }
    printf("The number of ndes are:%d",count);
}
