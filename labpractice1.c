 /*
 //finding sum of n numbers by allocating memeory dynamically//
 #include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,*p,sum=0;

    printf(" enter the value of n\n");
    scanf("%d",&n);

    p=(int*)malloc(sizeof(n));

    if(p==NULL)
    {
        printf("memeory not allocated\n");
    }

    else{
        printf("enter the nmbers\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",(p+i));
        }

        for(i=0;i<n;i++)
        {
            sum=sum+*(p+i);
        }
        
        printf("the sum of the entered numbers is %d\n",sum);
        free(p);
    }
}
*/

/*
//finding the sum of the principal diagonal,secondary diagonal and whole matrix//

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,m,n,pd=0,sd=0,s=0;

    int (*p)[3];

    printf("enter the rows and column\n");
    scanf("%d %d",&m,&n);

    if(m!=n)
    {
        printf("the rows and column are not equal hence cannot be further processed\n");
        exit(0);
    }

    p=(int *)malloc(m*n*sizeof(int));
    printf("enter the elements of the matrix\n");       //taking in the matrix element

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }

    printf("the entered matrix is\n");                  //printing the matrix elememts

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*(*(p+i)+j));
        }
    printf("\n");
    }

    


for(i=0;i<m;i++)                //finding the sum of the primary diagonal
{
    pd=pd+*(*(p+i)+i);
}


for(i=0,j=(n-1);i<m;i++,j--)    //finding the sum of the secondary diagonal
{
    sd=sd+*(*(p+i)+j);
}


for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        s=s+*(*(p+i)+j);
    }
}


printf("\nthe sum of the primary diagonal=%d\n",pd);
printf("the sum of the secondary diagonal=%d\n",sd);
printf("the sum of the whole matrix=%d\n",s);
}


*/

/*
//basic of string operations

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]="Abom";
    char s2[]="Pradhan";
    char s3[30];

   // puts(strcat(s1,s2));

    // strcpy(s3,s2);

    // puts(s3);
    

    printf("the length of the string 1 is %d\n",strlen(s1));
    printf("the length of the string 2 is %d\n",strlen(s2));

    printf("the reverse of the string is\n");
    puts(strrev(s2));


    printf("the cmp of the string is %d\n",strcmp(s1,s2));


}
*/

/*

//string operations

#include<stdio.h>
#include<string.h>

void strcopy(char *s1,char *s2);
void strconcat(char *s1,char *s2);
void strcomp(char *s1, char *s2);
void strreverse(char *s1, char *s2);


int main()
{
    char *s1[50],*s2[50];
    int ch;

    printf("enter the first string\n");
    gets(s1);
    printf("enter the second string\n");
    gets(s2);

    printf("the entered string is\n");
    puts(s1);
    puts(s2);

   while(1)
  {
  
   
    printf("enter your options\n1.string copy\n2.string concatinate\n3.string compare\n4.string reverse\n5.Quti\n");
    scanf("%d",&ch);

 
  
    switch(ch)
    {
        case 1:
        {
            printf("the copy of string is\n");
            strcopy(s1,s2);
            break;
        }

        case 2:
        {
            printf("string concatinate\n");
            strconcat(s1,s2);
            break;
        }

        case 3:
        {
            printf("comparing strings\n");
            strcomp(s1,s2);
            break;
        }

        case 4:
        {
            strreverse(s1,s2);
            break;
        }

        case 5:
        {
            exit(0);
            break;
        }

        default:
        {
            printf("invalid input\n");
            break;
        }
    }

}


}


void strcopy(char *s1,char *s2)
{
    printf("before copying\n");
    puts(s1);
    puts(s2);

    printf("after copying string from 2 to 1\n");
    strcpy(s1,s2);
    printf("string 1\n");
    puts(s1);
    printf("string 2\n");
    puts(s2);
    return 0;
    
    }

void strconcat(char *s1,char *s2)
{
    printf("before the conctination\n");
    puts(s1);
    puts(s2);

    printf("after the concatination\n");
    strcat(s1,s2);
    puts(s1);
    puts(s2);

}

void strcomp(char *s1, char *s2)
{
    int a,b;
    a=strcmp(s1,s2);
    b=strcmp(s2,s1);
    if(a<b)
    {
        printf("the string 1 is smaller\n");
    }

    else if(a>b)
    {
        printf("string 1 is greater than 2\n");
    }

    else{
        printf("the both the strings are equal\n");
    }
}

void strreverse(char *s1, char *s2)
{
    printf("the reverse of the string 1 is\n");
    puts(strrev(s1));

    printf("the reverse of teh string 2 is\n");
    puts(strrev(s2));

}
 */

// finding the sum of the salary of the employees//
/*

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee
{
    char ename[50];
    int eid;
    char edept[50];
    int esalary;
};

totalsalary(struct employee *e,char deptn[],int m);

int main()
{
    struct employee *emp;
    int m,i;
    char dept[20];
    

    printf("enter the number of employees\n");
    scanf("%d",&m);

    emp=(struct employee*)malloc(m*sizeof(struct employee));

    printf("enter the details of the employee\n");

    for(i=0;i<m;i++)
    {
        printf("enter the name of the employee\n");
        scanf("%s",(emp+i)->ename);

        printf("enter the employee id\n");
        scanf("%d",&(emp+i)->eid);

        printf("enter the department of the employees\n");
        scanf("%s",(emp+i)->edept);

        printf("enter the salary of the employee\n");
        scanf("%d",&(emp+i)->esalary);
    }
    printf("the entered details are\n");
  for (i=0;i<m;i++)
  {
      printf("employee name %s\n",(emp+i)->ename);

      printf("employee id %d\n",(emp+i)->eid);

      printf("employee dept %s\n",(emp+i)->edept);

      printf("emplouee salary %d\n",(emp+i)->esalary);
  }


 printf("enter the dept name to be salary claculated\n");
 scanf("%s",&dept);

 totalsalary(emp,dept,m);




}



totalsalary(struct employee *e,char deptn[],int m)
{
    int salary=0;
    int i;

    for(i=0;i<m;i++)
    {
        if(strcmp((e+i)->edept,deptn)==0)
        salary=salary+(e+i)->esalary;
      
    }
    // else 
    //   {
    //       printf("enter the correct dept\n");
    //   }
    



    printf("the salary of the %s dept is %d\n",deptn,salary);


}

    */


   //Binary search//

   #include<stdio.h>

   int main()
   {
       int key,mid,low,high,i,n;

       printf("enter the no of elements to be entered\n");
       scanf("%d",&n);

       int a[n];

       printf("enter %d elements in ascending order\n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        printf("entered elements are\n");
        for (i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }

            printf("\nenter the element to be searched\n");
            scanf("%d",&key);

            low=0;
            high=n-1;

            while(low<=high)
            
            {
                mid=low+high/2;
                if(key<a[mid])
                {
                    high=mid-1;
                }

                else if(key>a[mid])
                {
                    low=mid+1;

                }

                else if(key==a[mid])
                {
                    printf("found the element %d at the location %d\n",key,mid );
                    break;
                }
            }
        
   }







    
    

