#include<stdio.h>
 
 int main()
 { int a,b;
   printf("Enter the the first number");
   scanf("%d",&a);
   printf("Enter the secound number");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("The swap of two numbers %d%d",a,b);
   return 0;
   }