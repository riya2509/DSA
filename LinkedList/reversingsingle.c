
 #include<stdio.h>
 #include<stdlib.h>

 void main(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*temp,*newnode,*prevnode,*nextnode,*currentnode;
    int count=0,choice;
    head=0;//Assuming initially there is no node
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else// new node created using malloc 
        {
            temp->next=newnode;
            temp=newnode;

        }
        printf("Do you want to continue 0 or 1 ?");
        scanf("%d", &choice);
    }
//Reversing a single linked list
prevnode=0;
currentnode=nextnode=head;
while(nextnode!=0){
    nextnode=nextnode->next;//Storing the adress of the next node before breaking the link
    //storing the adress of previous node
    currentnode->next=prevnode;
    prevnode=currentnode;
    currentnode=nextnode;
}
//prevnode will now contain the adress of the next node
head=prevnode;

    //printing list by traversing
    temp=head;
    while(temp!=0){
        printf("%d",temp->data);
        temp=temp->next;
        count++;
    }
printf("Number of nodes are %d", count);

 }