#include<stdio.h>
#include<string.h>
int main()
{
    char st1[50];
    char st2[50];

    printf("enter \n");
    gets(st2);
    scanf("%s",st1);
    

    printf("%s\n",st1);
    puts(st2);


    char st3[50];

    //puts(strcat(st1,st2));

    puts(strcpy(st3,st1));
    puts(st3);

    int i=strlen(st1);
    printf("%d\n",i);
    puts(strrev(st2));

}