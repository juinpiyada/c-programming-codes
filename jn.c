#include<stdio.h>
#include<string.h>
void main()
{
    FILE *p;
    int n,i;
    char s1[100];
    p=fopen("mj.txt","w");
    if(p==NULL)
    printf("file is not  created/n");
    else
    printf("file created");
    printf("Enter your name to write into the file:\n ");
    gets(s1);
    n=strlen(s1);
    for(i=0;i<n;i++)
    fputs(s1,p);
    printf("your file has been writeen sucessfully");
    fclose(p);

























}











































































































