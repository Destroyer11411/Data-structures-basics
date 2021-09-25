/*
//1.to find the sum of n numbers and allocating memory dynamically

 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int i,n,*p,sum=0;

     printf("enter the number of elements to be added in\n");
     scanf("%d",&n);

     p=(int *)malloc(n*sizeof(int));

     if (p==NULL)
     {
         printf("memory cannot be allocated\n");
     }

     else{
         printf("enter %d numbers to be added in\n",n);

         for(i=0;i<n;i++)
         {
             scanf("%d",(p+i));

             sum=sum+*(p+i);
         }

         printf("the sum of the entered number is %d\n",sum);
         free(p);
         return 0;
     }
 }

 */

/*
// program to find the sum of the principal,secondary and sum of whole matrix//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,m,n,pd=0,sd=0,sum=0;
    int (*p)[3];

    printf("enter the rows and column of the matrix\n");
    scanf("%d %d",&m,&n);

    if(m!=n)
    {
        printf("the entered matrix is not an square matrix hence cannot be processed\n");
        exit(0);
    }

    p=(int*)malloc(m*n*sizeof(int));

    printf("enter the matrix\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(p+i)+j));
        }
    }


  for(i=0;i<m;i++)
  {
      pd=pd+*(*(p+i)+i);
      
  }

  for(i=0,j=(n-1);i<m;i++,j--)
  {
      sd=sd+*(*(p+i)+j);
  }

  for(i=0;i<m;i++)
  {
      for(j=0;j<n;j++)
      {
          sum=sum+*(*(p+i)+j);
      }
  }

  printf("the sum of the primary matrix %d\n",pd);
  printf("the sum of the secondary matrix%d\n",sd);
  printf("the sum of the hwole matrix is%d\n",sum);
}

*/



/*
// 3.product  of two matrix //

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,m,n,sum;

    int *a[3],*b[3],*c[3];

    printf("enter the number of rows and columns\n");
    scanf("%d %d",&m,&n);

    if(m!=n)
{
    printf("the matrix multiplication cannot be performed\n");
    exit(0);
}

    printf("enter the elements of the matrix 1\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",a[i]+j);
        }
    }

    printf("enter the matrix 2\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",b[i]+j);
        }
    }

    printf("the entered matrix 1 is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i]+j);
        }
        printf("\n");
    }

    printf("the entered matrix 2 is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i]+j);

        }
        printf("\n");
    }

    printf("multypling the matrix\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            *(c[i]+j)=*(c[i]+j)+*(a[i]+j)*(*(b[i]+j));
        }
    }

    printf("the mulyiplication of the matrix is\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i]+j);
        }
        printf("\n");
    }


}
*/


/*
//4.string operations//

#include<stdio.h>
#include<string.h>
 void compare(char *s1,char *s2);
     void reverse(char *s1,char *s2);
     void copy(char *s1,char *s2);
     void concatinate(char *s1,char *s2);
int main()
{
    char *s1[50],*s2[50];
    int ch;

    printf("enter the string 1\n");
    gets(s1);

    printf("enter the string 2\n");
    gets(s2);

    printf("the entered string is\n");
    printf("string 1\n");
    puts(s1);
    printf("string 2\n");
    puts(s2);

    while(1)
    {
    

    printf("1.cocatinate\n2.copy\n3.reverse\n4.compare\n");
    printf("enter the operation you want to be perform\n");
    scanf("%d\n",&ch);

    switch(ch)
    {
        case 1:
        {
            concatinate(s1,s2);
            break;
        }

        case 2:
        {
            copy(s1,s2);
            break;
        }

        case 3:
        {
            reverse(s1,s2);
            break;
        }

        case 4:
        {
            compare(s1,s2);
            break;
        }

        case 5:
        {
            exit(0);
            break;
        }

        default :
        {
            printf("invalid input\n");
            break;
        }
    }

    }
}

    void concatinate(char *s1,char *s2)
    {
        printf("string before concatination\n");
        puts(s1);
        puts(s2);
        strcat(s1,s2);
        printf("after concatinate\n");
        puts(s1);
        return 0;
    }

    void copy(char *s1,char *s2)
    {
        char *s3[50];
        prinf("before copy\n");
        puts(s1);
        puts(s2);
        strcpy(s3,s1);

        printf("after copy\n");
        puts(s3);
        return 0;
    }

     void reverse(char *s1,char *s2)
     {
        printf("the strings before reverse\n");
        puts(s1);
        puts(s2);

        printf("the string after reverse\n");
        strrev(s1);
        puts(s1);
        strrev(s2);
        puts(s2);
     }

     void compare(char *s1,char *s2)
     {
         int a,b;

         a=strcmp(s1,s2);
         b=strcmp(s2,s1);

         if(a<b)
         {
             printf("the string 1 is bigger\n");
         }

         else if (b>a)
         {
             printf("the string 2 is bigger\n");
         }

         else{
             printf("the both the string are equal\n");
         }

     }
     */
/*
    //5. Employee details and salary//

    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>

    struct employee{
        char ename[50];
        int eid;
        char edept[50];
        int esalary;
    };

    void totalsalary(struct employee *e,char deptn[],int m);

    int main()
    {
        struct employee *emp;
        char dept[50];
        int i,m;

        printf("enter the number of the employees\n");
        scanf("%d",&m);

        emp=(struct employee *)malloc(m*sizeof(struct employee));
        printf("enter the employee details\n");

        for(i=0;i<m;i++)
        {
          printf("employee name\n");
          scanf("%s",(emp+i)->ename);

          printf("employee id\n");
          scanf("%d",&(emp+i)->eid);

          printf("employee department\n");
          scanf("%s",(emp+i)->edept);

          printf("employee salary\n");
          scanf("%d",&(emp+i)->esalary);
        }


        printf("the entered details are\n");

        for(i=0;i<m;i++)
        {
            printf("name:%s\n",(emp+i)->ename);

            printf("id:%d\n",(emp+i)->eid);

            printf("department:%s\n",(emp+i)->edept);

            printf("salary:%d\n",(emp+i)->esalary);
        }

        printf("enter the dept you want to calculate the salary of\n");
        scanf("%s",dept);

        totalsalary(emp,dept,m);
        
    }

    void totalsalary(struct employee *e,char deptn[],int m)
    {
        int i,s=0;

        for(i=0;i<m;i++)
        {
        if(strcmp((e+i)->edept,deptn)==0)
        s=s+(e+i)->esalary;
        }

        printf("the salary of the department %s is %d\n",deptn,s);
        return 0;   
    
            
        
    }
    
    */
   /*
   // 6.binary search //
   
   #include<stdlib.h>
   #include<stdio.h>

   int main()
   {
       int key,mid,high,low,n,i;
       printf("enter the number of the elements\n");
       scanf("%d",&n);

       int a[n];

       printf("enter the elements\n");
       for(i=0;i<n;i++)
       {
        scanf("%d",&a[i]);
       }

       printf("entered elements are\n");
       for(i=0;i<n;i++)
       {
           printf("%d\t",a[i]);
       }

       printf("enter the element to be found\n");
       scanf("%d",&key);

       low=0;
       high=n-1;

       while(low<=high)
       {
           mid=high+low/2;

           if(key>a[mid])
           {
               low=mid+1;
           }

           else if(key<a[mid])
           {
               high=mid-1;

           }

           else if(key=a[mid])
           {
               printf("the element %d is found at the location %d\n",key,mid);
               break;
           }
       }
   }
   */

  //7.tower of hanoi//
  /*
  #include<stdio.h>

  void towers(int n,char src,char dest, char aux);

  int main()
  {
      int n;
      printf("enter the number of diska\n");
      scanf("%d",&n);

      printf("moves made\n");

      towers(n,'A','C','B');
  }

  void towers(int n,char src,char dest, char aux)
  {
      if(n==1)
      {
          printf("moved disk form %c to %c\n",src,dest);
          return;
      }

      towers(n-1,src,aux,dest);
      printf("moved disk %d from %c to %c\n",n,src,dest);
      towers(n-1,aux,dest,src);
  }
  */
/*
 //8. push and pop using structure pointer//

 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #define SIZE 5

 struct student
 {
     char name[50];
     char usn[50];

 };

 struct stack
{
    struct student stud[SIZE];
    int top;
};

void push(struct stack *ps,struct student st1);
struct student pop(struct stack *ps);


int main()
{
    struct student st1,rt1;
    struct stack s;
    s.top=-1;

    int ch,i;

do{
    printf("enter the choice\n");
    printf("1.push\t2.pop\t3.taverse\t4.quit\n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        {
            printf("enter the name and usn of the student\n");
            scanf("%s %s",st1.name,st1.usn);
            push(&s,st1);
            break;
        }

            case 2:
            {
                rt1=pop(&s);
                printf("the poped student with the name %s and usn %s\n",rt1.name,rt1.usn);
                break;

            }

            case 3:
            {
                printf("the elements of the stack are\n");
                for (i=s.top;i>=0;i--)
                {
                    printf("name %s\nusn%s\n",st1.name,st1.usn);
                    
                }
                break;
            }
            case 4:
                {
                    printf("quiting the stack operation.........\n");
                    exit(0);
                }

          default:
                {
                    printf("the entered option is not valid\n");
                    break;
                }

    }
}while(ch!=4);
            
}

void push(struct stack *ps,struct student st1)
{
    if(ps->top==SIZE-1)

    {
        printf("stack overflow\n");
    }

    else
    {

        ++(ps->top);
        strcpy(ps->stud[ps->top].name,st1.name);
        strcpy(ps->stud[ps->top].usn,st1.usn);
        
    }
}


struct student pop(struct stack *ps)
{
        struct student r;
        if(ps->top==-1)
        {
            printf("stack underflow\n");
        }
        else{
        strcpy(r.name,ps->stud[ps->top].name);
        strcpy(r.usn,ps->stud[ps->top].usn);
        (ps->top--);
        return r;
        }

}

*/


/*
// queue //
// programming for managing the waiting list of an call centre//

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int queue[SIZE];
int front=0;
int rear=0;

void insert();
void delete();
void traverse();

int main()
{
    int ch;
    printf("\t\t\twelcome to the call center\n");

    while(1)
    {
        printf("enter the operation you want to perform\n");
        printf("1.add an call to the list\n2.remove an call from the list\n3.view the waiting list\n4.quit\n");
        scanf("%d",&ch);
        printf("\n");

        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                traverse();
                break;
            case 4:
                exit(0);
                break;
            default:
            printf("entered option is not valid\n");

        }
    }
}

 void insert()
 {
     if(rear==SIZE-1)
     {
         printf("\n");
         printf("the call waiting list is full\n");
         printf("\n");
         printf("\n");
     }
     else{
         int ele;
         printf("enter the caller id to be instrted in the list\n");
         scanf("%d",&ele);

         queue[rear]=ele;
         rear++;
         printf("\n");
     }
 }   

 void delete()
 {
     int i;
     if(front == rear)
     {
         printf("the waiting list is empty\n");
         printf("\n");
         printf("\n");
     }


    else {
        printf("the removed caller id is %d\n",queue[front]);
        for(i=0;i<rear;i++)
        {
            queue[i]=queue[i+1];
        }
        
    }


 } 


 void traverse()
 {
     int i;
     if(front == rear)
     {
         printf("the waiting list is empty\n");
         printf("\n");
         printf("\n");

     }
     

     else{
         printf("printing the waiting list\n");
         for(i=front;i<rear;i++)
         {
             printf("%d\t",queue[i]);
         }
         printf("\n");
         
     }
 }            

*/

/*
// circular queue//

#include<stdio.h>
#define SIZE 5
int front=-1;
int rear=-1;

void enqueue();
void dequeue();
void traverse();


int cqueue[SIZE];

int main()
{
    int ch;

    while(1)
    {
        printf("enter the option \n");
        printf("1.enqueue\n2.dequeue\n3.traverse\n.exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:{
                enqueue();
                break;
            }

            case 2:
            dequeue();
            break;

            case 3:
            traverse();

            case 4:
            exit(0);

            default:
            printf("invalid input\n");
        }
    }
}


void enqueue()
{
    if((rear+1)%SIZE==front)
    printf("queue is full\n");
    

    else{
        int val;
        

    rear=(rear+1)%SIZE;

    printf("enter the number to be added in\n");
    scanf("%d",&val);
    cqueue[rear]=val;
    
    }
}

void dequeue()
{
    if(rear==front)
    {
        printf("queue is empty\n");
    }

    else{
        int ele;
        front=(front+1)%SIZE;
        ele=cqueue[front];
        printf("%d",&ele);
    }
}

void traverse()
{
    if(front==rear)
    {
        printf("queue is empty\n");
    }

    else
    {
        int  i;
        for(i=front;i<rear;i++)
        {
            printf("%d\t",cqueue[i]);
        }
    }
}
    
*/

/*
// example of the linked list//

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

void traversal(struct node *ptr);

int main()
{
    struct node *first,*second,*third;

    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    


    printf("enter the data of the first element\n");
    scanf("%d",first->data);

    printf("enter the data of the second element\n");
    scanf("%d",second->data);

    printf("enter the data  of the second element\n");
    scanf("%d",third->next);

    // first->data=1;
    // second->data=4;
    // third->data=8;
    
    first->next=second;
    second->next=third;
    third->next=NULL;

    printf("printing the elements entered\n");
    
    traversal(first);


    

}

void traversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("the data entered is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
 

*/


//BINARY TREES//

/*

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;

};


struct node* createn(int d);

void preorder(struct node *head);

struct node* createn(int d)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=d;
    p->left=NULL;
    p->right=NULL;
    return p;
}

void preorder( struct node *head)
{
    printf("%d\t",head->data);
    preorder(head->left);
    preorder(head->right);
}

int main()
{
    struct node *p=createn(4);
    struct node *p1=createn(5);
    struct node *p2=createn(7);
    struct node *p3=createn(8);
    struct node *p4=createn(6);
    struct node *p5=createn(9);
    struct node *p6=createn(10);

    p->left=p1;
    p->right=p4;
    p1->left=p2;
    p1->right=p3;
    p4->left=p5;
    p4->right=p6;

    preorder(p1);

    return 0;


}

*/
 /* 
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node *right;

};


struct node* create(int data)
{
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void preorder(struct node* head)
{
  if(head!=NULL)
  {
      printf("%d\n",head->data);
      preorder(head->left);
      preorder(head->right);
  }  
}
void postorder(struct node* head)
{
  if(head!=NULL)
  {
      
      postorder(head->left);
      postorder(head->right);
      printf("%d\n",head->data);
  }  
}

int main()
{
    struct node* p=create(1);
    struct node*p1=create(2);
    struct node*p2=create(3);
    struct node* p3=create(4);

    p->left=p1;
    p->right=p2;
    p1->left=p3;

    preorder(p);
    printf("\n");
    postorder(p);

}
*/
    
    
    
    

    


