/*#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;


};

struct node* createn(int d);

struct node* createn(int d)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=d;
    p->left=NULL;
    p->right=NULL;
    return p;
}


int main()
{
    struct node *p=createn(1);
    struct node *p1=createn(2);
    struct node *p2=createn(3);

    p->left=p1;
    p->right=p2;

    return 0;
}
*/





//ceating node for binary tree//
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};


struct node*   createn(int d);
void preorder(struct node *root);

void preorder(struct node *root)
{
    if(root!=NULL)
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
    
}
struct node* createn(int d)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=d;
    p->left=NULL;
    p->right=NULL;
    return p;
}

int main()
{
    struct node *p=createn(4);
    struct node *p1=createn(2);
    struct node *p2=createn(6);
    struct node *p3=createn(8);
    struct node *p4=createn(9);
    struct node *p5=createn(1);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    

    preorder(p);

    return 0;
}