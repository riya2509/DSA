#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;

};
struct node *head=NULL;
struct node *sorted=NULL;

void push(int val)
{
    //allocating node
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}
void sortInsert(struct node* newnode){
    if(sorted ==NULL||sorted->data >=newnode->data){
        newnode->next=sorted;
        sorted=newnode;

    }
}
void insertionsort()
{
    struct node* current=head;
    //traversing the linked list adn inserting to node to sort
    struct node * next=current->next;//storing next
    //inserting current
    sortedInsert(current);

    //updating current
    current=next;
    //updating head to point the sorted linked list
    head=sorted;

}
void printlist (struct node* head){
    while(head!=NULL){
        printf("%d",head->data);
        head=head->next;

    }
    printf("NULL");

}
int main(){
    push(8);
    push(10);
     push(11);
      push(5);
      insertionsort(head);
      printf("Linked list after sorting");
      printlist(head);
}



