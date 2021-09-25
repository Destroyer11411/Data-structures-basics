// #include<stdio.h>
// #include<stdlib.h>
// #define S 5

// struct queue
// {
//     int id[S];
//     int no[S];
//     int front;
//     int rear;

// };


// int main()
// {
//     struct queue q;
//     q.front=0;
//     q.rear=0;

//     int ch;

//     while(1)
//     {
//         printf("enter the operation you want to be performed\n");
//         printf("1.enqueue\n2.dequeue\n3.traverse\n4.exit\n");
//         scanf("%s",&ch);

//         switch(ch)
//         {
//             case 1:
//             {
//                 if(q.rear==S-1)
//                 {
//                     printf("the queue is full\n");

//                 }
//             else{
//                 printf("enter the id and no of the student\n");
//                 scanf("%d %d",q.id[q.rear],q.no[q.rear]);
//                 q.rear++;
//                 break;
//             }


//             case 2:
//             {
//                 if(q.front==q.rear)
//                 {
//                     printf("the queue is empty\n");
//                 }

//                 else
//                 {
//                     printf("the id and no of the students are\n");
//                     printf("id:%d\n",q.id[q.front]);
//                     printf("no:%d\n",q.no[q.front]);

//                     int i;
//                     for(i=q.front;i<q.rear;i++)
//                     {
//                         q.id[i]=q.id[i+1];
//                         q.no[i]=q.no[i+1];
//                     }
//                 }
//                 break;
//             }

//             case 3:
//             {
//                 if(q.front==q.rear)
//                 {
//                     printf("the queue is full\n");
                    
//                 }

//                 else{
//                         int i;
//                         printf("the elements of the queue are\n");
//                         for(i=q.front;i<q.rear;i++)
//                         {
//                             printf("id:%d\n",q.id[i]);
//                             printf("no:%d\n",q.no[i]);
//                         }
//                 }
//                 break;
//             }

//             default : 
//             printf("invalid input\n");
//             break;


//             }
//         }
//     }
// }



//  #include<stdio.h>

//  int main()
//  {
//      int a,*p;

//      p=&a;

//      printf("enter the value of the item a \n");
//      scanf("%d",&a);
//     printf("the entered element is=%d\n",*p);
//  }


// #include<stdio.h>
// int main()
// {
//     char a;
//     int f;
//     float r;

//     a='w';
//     f=2;
//     r=23.45;

//     printf("the %c is stored at %d\n",a,&a);
//     printf("the %d is stored at %d\n",f,&f);
//     printf("the %f is stored at %d\n",r,&r);
// }

//chain of pointers//
/*
#include<stdio.h>
int main()
{
    int x=100;
    int *p1,**p2,***p3;
    int *d;
    p1=&x;
    p2=&p1;
    p3=&p2;
    

    printf("%d %d %d %d %d %d %d %d %d  %d\n",x,p1,*p1,p2,*p2,**p2,p3,*p3,**p3,***p3);
}
*/

//  #include<stdio.h>

//  int main()
//  {
//    int x[]={1,2,3,4,5};

//    printf("%d\n",x[3]);   
//    printf("%d\n",*(x+3));

//    printf("all teh elements of the array are\n");
//    int i;
//     for(i=0;i<5;i++)
//     {
//         printf("%d\t",*(x+i));
//     }                                    
//  }


/*
#include<stdio.h>

int main()
{
    int i,n;
    printf("enter the number of elements of the array\n");
    scanf("%d",&n);
    int x[n];
    int sum;

    printf("enter the %d number of the elements\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",(x+i));
        
    }

    printf("the entered elements are \n");
     for(i=0;i<n;i++)
     {
         printf("%d\t",*(x+i));
         
    }

    printf("the sum is =%d\n",sum);
}
*/

/*
#include<stdio.h>
 void func(int*, int*);

int main()
{
    int u=100;
    int v=200;

    printf("before calling the fnction %d\t %d\n",u,v);

    func(&u,&v);

    printf("after calling the function\n %d\t%d",u,v);
}

void func(int *u,int *v)
{
    *u=*u+100;
    *v=*v+300;

    printf("insid the function %d \t %d\n",*u,*v);
}
*/



/*
//binary tree//

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * left;
    struct node * right;
};


struct node * createn(int data)
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}


void pretrav(struct node * root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        pretrav(root->left);
        pretrav(root->right);
    }
}


int main()
{
    struct node* p=createn(4);
    struct node* p1=createn(1);
    struct node* p2=createn(6);
    struct node* p3=createn(5);
    struct node* p4=createn(2);


    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;


    pretrav(p);
    
    
}
*/

/*
// linked list//

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node* t);

int main()
{
    struct node *head,*second,*third,*fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=11;
    head->next=second;

    second->data=21;
    second->next=third;

    third->data=31;
    third->next=fourth;

    fourth->data=41;
    fourth->next=NULL;

    traversal(head);
}

void traversal(struct node* t)
{
    while(t!=NULL)
    {
        printf("the data is %d\n",t->data);
        t=t->next;
    }
}
*/


/*
//infix to postfix

#include<stdio.h>

char stack[50];
int top=-1;

void push(char ch)
{
    stack[top]=ch;
    top++;
}

char pop()
{
    char c;
    c=stack[top];
    top--;
    return c;
}

int prcd(char ch)
{
    int p;

    switch(ch)
    {
        case '+' :
        {
            p=1;
            break;
        }

        case '-' :
        {
            p=1;
            break;
        }

        case '*' :
        {
            p=2;
            break;
        }

        case '/' :
        {
            p=2;
            break;
        }

        return p;

    }
    }


void conversion(char infix[],char postfix[])
{
    int i=0;
    int p=0;
    char ch;

    while((ch=infix[i])!='\0')
    {
        switch(ch)
        {
            default: postfix[p++]=ch;
            break;

            case'*':
            case'/':
            case'+':
            case'-':

            while(top!=-1&&prcd(stack[top])>prcd(ch))

            postfix[p++]=pop();
            push(ch);
            break;
        }
        i++;
    }

    while(top!=-1)
    postfix[p++]=pop();
    postfix[p]='\0';
}

int main()
{
    char infix[50],postfix[50];
    printf("enter the valid infix expresssion\n");
    scanf("%s",infix);


    conversion(infix,postfix);

    printf("the postfix expression=%s\n",postfix);
}
*/



/*
//binary search//
#include<stdio.h>

int main()
{
    int high,low,key,mid,n;

    printf("enter the number of the elements in the array\n");
    scanf("%d",&n);
    int a[n];
    int i;

    printf("enter the elements\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("the entered elements are\n");
     for(i=0;i<n;i++)
     {
         printf("%d",a[i]);
         printf("\t");
     }

     printf("enter the element to be found\n");
     scanf("%d",&key);
     low=0;
     high=n-1;

     while(low<=high)
     {
         mid=high+low/2;

         if(key<a[mid])
         {
             high=mid-1;
         }

         else if(key>a[mid])
         {
             low=mid+1;
         }

         else if (key==a[mid])
         {
             printf("found the element %d at location %d\n",key,mid);
             break;
         }
         




     }
}

 */

//doubly linked list//

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;

};

void traverse(struct node *);
void backtrav(struct node*);

struct node* createn(int data)
{
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=data;
    t->prev=NULL;
    t->next=NULL;
    return t;
}

int main()
{
    struct node *n1=createn(23);
    struct node *n2=createn(34);
    struct node *n3=createn(45);
    struct node *n4=createn(56);

    n1->next=n2;
    n1->prev=NULL;

    n2->next=n3;
    n2->prev=n1;

    n3->next=n4;
    n3->prev=n2;

    n4->next=NULL;
    n4->prev=n3;


    printf("traverse from the front\n");
    traverse(n1);
    printf("\n");
    
    printf("traverse form the behind\n");
    backtrav(n4);
    return 0;
}

void traverse(struct node* r)
{
    while(r!=NULL)
    {
        printf(" %d\t",r->data);
        r=r->next;
    }
}

void backtrav(struct node *y)
{
    while(y!=NULL)
    {
        printf("%d\t",y->data);
        y=y->prev;
    }
}