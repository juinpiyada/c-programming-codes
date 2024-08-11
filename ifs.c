#include<stdio.h>
int main()
{ int a,b,c;
 printf("enter the numner:");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b)
 if(a>c)
 printf("The bigger is%d :",a);
 else
 printf("The biggest is%d :",c);
 else
 if(b>c)
 printf("the biggest is%d :",b);
 else
 printf("the biggest is %d:",c);
 return(0);
 }
 