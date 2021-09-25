
//creating and traversing the elements of the linked list//

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
void traverse(struct node *ptr);
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;


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

    traverse(head);

    return 0;
}


void traverse(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("the data is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}