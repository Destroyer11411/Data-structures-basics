//program to enter an node at the begining of the list//

#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

struct node* insertatfirst(struct node* head, int data);
void traverse(struct node *p);


struct node* insertatfirst(struct node* head, int data) 
{
  struct node * ptr=(struct node*)malloc(sizeof(struct node));

  ptr->next=head;
  ptr->data=data;
  return ptr;
}


void traverse(struct node *p)
{
    while(p!=NULL)
    {
        printf("the data is:%d\n",p->data);
        p=p->next;
    }
}

int main()
{
    struct node *head,*second,*third,*fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=21;
    second->next=third;

    third->data=27;
    third->next=fourth;

    fourth->data=41;
    fourth->next=NULL;

   printf("the items in the linked list before the addition of the first element\n");
    traverse(head);
    printf("linked list element after the insertion of the first element\n");
    head=insertatfirst(head,001);
    traverse(head);
}